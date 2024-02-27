#include <iostream>
using namespace std;

/*

Function overloading can be done using classes
but here I have done it without classes.

*/

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

class Line
{
    // This class uses operator overloading
public:
    int length;

    Line operator+(Line &l)
    {
        Line line;
        line.length = this->length + l.length;
        return line;
    }
};

int main()
{
    cout << "Sum from function 1: " << sum(1, 2) << endl;
    cout << "Sum from function 2: " << sum(1, 2, 3) << endl;

    Line l1 = Line();
    l1.length = 10;

    Line l2 = Line();
    l2.length = 20;

    Line l3 = l1 + l2;
    cout << "Lenght of line l3 = " << l3.length << endl;
    return 0;
}