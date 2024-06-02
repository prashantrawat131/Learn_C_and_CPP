#include <iostream>

using namespace std;

template <typename t1, typename t2>
void print(t1 x, t2 y)
{
    cout << "t1: " << x << endl;
    cout << "t2: " << y << endl;
}

int main()
{
    print<int, string>(10, "Hello");

    print<int, char>(20, 'c');

    return 0;


/*

Output:
t1: 10
t2: Hello
t1: 20
t2: c

*/