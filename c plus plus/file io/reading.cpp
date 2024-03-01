/*
This is a program to the read the data of the read.txt file
which is present in the same folder as this program.
*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    // Opening the file for reading
    string fileLocation = "./read.txt";
    ifstream in;
    in.open(fileLocation, ios::in);

    // Reading and printing the contents of the file.
    char ch;
    while ((ch = in.get()) != EOF)
    {
        cout << ch;
    }
    return 0;
}
