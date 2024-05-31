#include <iostream>
#include <memory>

using namespace std;

class Bird
{
public:
    string name;
    Bird(string name)
    {
        this->name = name;
    }
};

int main()
{
    shared_ptr<Bird> sptr(new Bird("Sparrow"));
    cout << "Sptr: " << sptr->name << endl;

    weak_ptr<Bird> wptr(sptr);

    cout << "Use count: " << sptr.use_count() << endl;
    return 0;
}

/*

Output:-
Sptr: Sparrow
Use count: 1

*/