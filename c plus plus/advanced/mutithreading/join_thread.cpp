/*
In this code there are two thread t1 and t2.
t1 is started first then t2 is started.
Both have their own set of code.
t2 joins t1 in its code. This means
that t2 will only execute further after t1 is completed.
*/

#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

pthread_t t1, t2;
int t1_id = 1, t2_id = 2;

void *threadCode1(void *id)
{
    int *threadId = (int *)id;
    for (int i = 0; i < 5; i++)
    {
        cout << "Thread with id " << *threadId << " running..." << endl;
        sleep(1);
    }
    return id;
}

void *threadCode2(void *id)
{
    void *status;
    int rc = pthread_join(t1, &status);
    if (rc)
    {
        cout << "Error while joining thread " << rc << endl;
        exit(1);
    }

    int *threadId = (int *)id;
    for (int i = 0; i < 5; i++)
    {
        cout << "Thread with id " << *threadId << " running..." << endl;
        sleep(1);
    }
    return id;
}

int main()
{
    // Creating attributes for the thread to make it joinable.
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    // Creating t1
    int rc = pthread_create(&t1, NULL, threadCode1, &t1_id);
    if (rc)
    {
        cout << "Error while creating thread " << rc << endl;
        exit(1);
    }
    pthread_attr_destroy(&attr);

    // Creating t2
    rc = pthread_create(&t2, NULL, threadCode2, &t2_id);
    if (rc)
    {
        cout << "Error while creating thread " << rc << endl;
        exit(1);
    }

    pthread_exit(NULL);
    return 0;
}