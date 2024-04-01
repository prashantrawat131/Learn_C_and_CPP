/*
References are just another name for the variable.

They are used in pass by reference so that the original value of the variable can be changed.

They help in avoiding the copy of the variable.

The difference between reference and pointer is that pointers store the address of the
variable but reference points diretly to the vairable. Hence no dereferencing is required in references.

Note: 
1) We can't have a reference without initialization i.e. no reference to null.
2) We can't have an array of references like we have in pointer. References always has single indirection.

 */

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Person
{
public:
    char name[1000];
    char description[99999];
    Person(const char *name, const char *description)
    {
        strcpy(this->name, name);
        strcpy(this->description, description);
    }
};

void printer(const Person &p)
{
    // Printer is only taking the reference to person object which is saving a lot of memory.
    cout << "Name: " << p.name << "\nDescription: " << p.description << endl;
}

void swap(int &x, int &b)
{
    // Values are passed by reference so the original values will be changed.
    int temp = x;
    x = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After swapping a = " << a << " b = " << b << endl;

    int x = 10;
    int &y = x;
    cout << "x = " << x << " y = " << y << endl;

    vector<int> v{1, 2, 3, 4, 5};
    for (int &x : v)
    {
        // Since we are using reference here, the original value of the vector will be changed.
        x = x * 2;
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    Person p("John", "A person who is very good at coding.");
    printer(p);

    return 0;
}

/*

Reference:

https://www.geeksforgeeks.org/references-in-cpp/

 */