/*
In this programm we will start reading a file.
We will not read from the start we will move the pointer to
some characters further and then read from there.

This is just to demonstrate the seek functionality.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Opening the file for reading
    ifstream in;
    in.open("./read.txt", ios::in);

    // moving the pointer 10 characters forward
    in.seekg(10);
    char ch;
    while ((ch = in.get()) != EOF)
    {
        cout << ch;
    }
    return 0;
}