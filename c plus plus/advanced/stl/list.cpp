/*
List in stl is doubly linked list.

It has non-contiguous memory.

*/

#include <iostream>
#include <list>

using namespace std;

void printList(list<int> l)
{
    for (auto &x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    list l{11, 22, 33, 44, 55};

    l.push_back(66);
    l.push_front(0);

    printList(l);

    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.front() << endl;

    // Currenlty the list is 0 11 22 33 44 55 66
    // We are inserting an element in place of 22. So it will be shifted.
    list<int>::iterator itr = l.begin();
    advance(itr, 2);
    l.insert(itr, 95);

    printList(l);

    l.sort();
    printList(l);
    return 0;
}