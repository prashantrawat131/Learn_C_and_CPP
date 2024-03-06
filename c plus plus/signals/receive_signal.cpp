#include <iostream>
#include <csignal>
#include <unistd.h>
using namespace std;

/*
I am unable to receive signal in this file.
Maybe because it is through the system.

When I am sending the signal myself, I am able to receive it like in the file send_signal.cpp
*/

void signalHandler(int signalNumber)
{
    cout << "Interrupt signal number: " << signalNumber << endl;
    exit(signalNumber);
}

int main(){
    // Register signal handler
    signal(SIGINT, signalHandler);

    while(1){
        cout << "Pess Ctrl+c to generate an interrupt and terminate the program." << endl;
        sleep(3);
    }

    return 0;
}