#include <iostream>
using namespace std;

class Fruit
{
private:
    static Fruit *instance;
    Fruit()
    {
    }

    Fruit(const Fruit &f) = delete;
    Fruit &operator=(Fruit &f) = delete;

public:
    static Fruit *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Fruit();
        }
        return instance;
    }
    void printFruit()
    {
        cout << "This is fruit";
    }
};

/*
In C++, static member variables, even if they are private, 
can be initialized outside the class. 
This is because the initialization does not count as 
access to the variable; it's merely setting up the initial 
value for the variable at the start of the program. 
The access control (public, protected, private) 
applies to the use of the member in expressions, 
not to its initialization.
*/
Fruit *Fruit::instance = nullptr;

int main()
{
    Fruit::getInstance()->printFruit();
    return 0;
}