#include <iostream>
using namespace std;

/*
Interface is not thing but an abstract class in cpp.
An abstract class is the one which has only pure virtual functions.
Pure virtual functions are those which do not have any definitions and
they need the derived classes to provide the definition.
*/

class Fruit
{
public:
    virtual void describe() = 0;
};

class Apple : Fruit
{
public:
    void describe()
    {
        cout << "This is an apple" << endl;
    }
};

class Banana : Fruit
{
public:
    void describe()
    {
        cout << "This is a Banana" << endl;
    }
};

int main()
{
    Apple a = Apple();
    a.describe();

    Banana b = Banana();
    b.describe();
    return 0;
}