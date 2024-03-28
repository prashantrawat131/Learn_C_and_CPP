#include <bits/stdc++.h>

using namespace std;

void swap(int &x, int &b)
{
    int temp = x;
    x = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After swapping a = " << a << " b = " << b << endl;
    return 0;
}