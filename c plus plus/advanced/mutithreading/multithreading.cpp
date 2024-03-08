#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void *threadCreated(void *threadId)
{
    cout << "Thread created\n";
    pthread_exit(NULL);
    return threadId;
}

int main()
{
    pthread_t threads[5];
    for (int i = 0; i < 5; i++)
    {
        int error = pthread_create(&threads[i], NULL, threadCreated, (void *)&i);
        if (error)
        {
            if (error == EAGAIN)
            {
                cout << "System lacked the necessary resources to create another thread" << endl;
            }
            else
            {
                cout << "Error while creating thread: " << error << endl;
            }
        }
        sleep(1);
    }
    pthread_exit(NULL);
}