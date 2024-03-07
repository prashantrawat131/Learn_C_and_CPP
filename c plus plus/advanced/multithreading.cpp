#include <iostream>
#include <pthread.h>
#include <unistd.h>

/*
Even though pthread is for unix based operating system.

I have run this program.

I used the command: g++ .\multithreading.cpp.

If vscode shows warning then debug anyway.
 */

using namespace std;

void *threadCreated(void *threadId)
{
    cout << "Thread created\n";
    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[5];
    for (int i = 0; i < 5; i++)
    {
        int error = pthread_create(&threads[i], NULL, threadCreated, (void *)i);
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