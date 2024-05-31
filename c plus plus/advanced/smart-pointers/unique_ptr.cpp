#include <iostream>
#include <memory>
using namespace std;

class Apple
{
public:
    Apple(int seeds)
    {
        this->seeds = seeds;
    }
    int seeds;
};

int main()
{
    unique_ptr<Apple> a1(new Apple(10));
    cout << "Seeds in a1: " << a1->seeds << endl;

    /* Apple *a2 = &a1;
        This is invalid because a1 is of different type.
    */

    /*unique_ptr<Apple> a2(a1);
    We can't use this intialization because in unique pointers
    one location can be pointed by only one unique pointer
    */

    unique_ptr<Apple> a2;
    a2 = move(a1);

    cout << "Seeds in a2: " << a2->seeds << endl;
    /*Now if we use a1 then it will give segmentation fault*/

    return 0;
}

/*

Output:-
Seeds in a1: 10
Seeds in a2: 10

*/