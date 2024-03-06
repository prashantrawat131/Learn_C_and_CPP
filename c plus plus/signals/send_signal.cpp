#include <iostream>
#include <csignal>

using namespace std;

void signalHandler(int signalNumber)
{
    cout << "Interrupt signal number: " << signalNumber << endl;
    exit(signalNumber);
}

int main()
{
    signal(SIGINT, signalHandler);

    raise(SIGINT);
}