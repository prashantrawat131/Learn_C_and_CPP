#include <iostream>
#include <string>
#include <functional>

using namespace std;
using namespace placeholders;

class Person
{
public:
    void speak(string name, string msg)
    {
        cout << "Hi my name is " << name << endl;
        cout << msg << endl;
    }
};

void print(int a, int b)
{
    cout << "a = " << a << "\tb =" << b << endl;
}

int main()
{
    auto fn1 = bind(print, _1, 10);
    fn1(20);

    auto fn2 = bind(print, 4, 5);
    fn2();

    // changing the order of parameters
    auto fn3 = bind(print, _2, _1);
    fn3(10, 20);

    Person p;
    auto fn4 = bind(&Person::speak, &p, _1, "This is default message");
    fn4("Prashant");

    return 0;
}