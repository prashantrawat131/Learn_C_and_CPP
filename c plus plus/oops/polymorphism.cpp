#include <iostream>
using namespace std;

/*
Here the Parent has the function printGender()
but the values printed are determined by the pointer.
If the pointer is pointing to male then it will print male
otherwise till print female.

This is because of the vertual keyword used before the
function in the parent class.
Due to this the compiler looks at the memory space pointed
by the pointer rather than the type of the pointer.

Virtual functions are the used in base classes when we
want the derived classes to give their own definitions
for the function.
*/

class Person
{
public:

    virtual void printGender()
    {
        cout << "Not Defined" << endl;
    }

    //We can also use below line when we don't have any definition for the function.
    // virtual void printGender() = 0;
};

class Male : public Person
{
public:
    void printGender()
    {
        cout << "Male" << endl;
    }
};

class Female : public Person
{
public:
    void printGender()
    {
        cout << "Female" << endl;
    }
};

int main()
{
    Person *p;
    Male m = Male();
    Female f = Female();

    p = &m;
    p->printGender();

    p = &f;
    p->printGender();

    return 0;
}