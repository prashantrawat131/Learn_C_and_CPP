/*
It is a type of set which can have more than one
occurrence of an element.
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);

    for (int x : ms)
    {
        cout << x << endl;
    }

    ms.erase(10);
    cout << "\nAfter erasing 10\n";
    for (int x : ms)
    {
        cout << x << endl;
    }

    return 0;
}