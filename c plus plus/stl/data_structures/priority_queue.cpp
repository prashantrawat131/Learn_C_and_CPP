/*
Priority queue in c++ is an implementation of Max Heap.

The value are stored in some form of array or vector.
But the arrangment is different from what we insert.

I arranges elements by using the ACBT (Almost Complete Binary
Tree) property of the MAX heap.

The first element is the root. The next two elements are left and right
child of root respectively. This property follows for all other elements.
*/

#include <iostream>
#include <queue>

using namespace std;

void print(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> pq;

    pq.push(99);
    pq.push(20);
    pq.push(30);
    pq.push(60);
    pq.push(50);

    print(pq);
}