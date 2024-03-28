/*
References are just another name for the variable.

They are used in pass by reference so that the original value of the variable can be changed.

They help in avoiding the copy of the variable.

The difference between reference and pointer is that pointers store the address of the
variable but reference points diretly to the vairable. Hence no dereferencing is required in references.
 */

#include <iostream>
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

    int x = 10;
    int &y = x;
    cout << "x = " << x << " y = " << y << endl;
    return 0;
}