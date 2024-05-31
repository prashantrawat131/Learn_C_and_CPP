#include <iostream>
#include <memory>

using namespace std;

class Person
{
public:
    string name;
    Person(string name)
    {
        this->name = name;
    }
};

int main()
{
    shared_ptr<Person> p1(new Person("Prashant"));
    shared_ptr<Person> p2(p1);

    cout << "P1: " << p1->name << endl;
    cout << "P2: " << p2->name << endl;

    cout << "Use count: " << p1.use_count() << endl;

    cout << "Removing pointer p2\n";
    p2.reset();

    cout << "Use count: " << p1.use_count() << endl;

    return 0;
}

/*

Output:-

P1: Prashant
P2: Prashant
Use count: 2
Removing pointer p2
Use count: 1

*/