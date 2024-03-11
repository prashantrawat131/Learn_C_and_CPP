#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

typedef struct ThreadData
{
    int threadId;
    const char *message;
} ThreadData;

void *printHello(void *threadArgs)
{
    ThreadData *myData;
    myData = (ThreadData *)threadArgs;
    cout << "Thread id: " << myData->threadId << endl;
    cout << "Message: " << myData->message << endl;
    pthread_exit(NULL);
    return threadArgs;
}

int main()
{
    pthread_t threads[5];
    ThreadData data[5];

    int rc;
    for (int i = 0; i < 5; i++)
    {
        cout << "Creating thread:\n";
        data[i].threadId = i;
        data[i].message = "This is message for thread ";
        rc = pthread_create(&threads[i], NULL, printHello, (void *)&data[i]);
        if (rc)
        {
            cout << "Error while creating thread " << rc << endl;
            exit(1);
        }
        sleep(1);
    }
    pthread_exit(NULL);

    return 0;
}