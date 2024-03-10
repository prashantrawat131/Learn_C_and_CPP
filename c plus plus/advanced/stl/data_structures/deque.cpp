/*
Double Ended Queue
*/

#include <iostream>
#include <deque>

using namespace std;

void print(deque<int> dq)
{
    for (auto &x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    print(dq);

    dq.pop_back();
    print(dq);

    dq.pop_front();
    print(dq);

    return 0;
}