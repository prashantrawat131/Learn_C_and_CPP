/*
In this tutorial we will create a file and write to it.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Creating the file
    string fileLocation = "./output.txt";
    ofstream out;
    out.open(fileLocation, ios::out);

    // Taking user input so that we will have something to write to the file.
    char userInput[100];
    cout << "Enter something to write to file" << endl;
    cin.getline(userInput, 100);

    // Writing to the file
    out << userInput << endl;
    out.close();
}