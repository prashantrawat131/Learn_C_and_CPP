#include <iostream>
using namespace std;

template <typename T>
T const &Max(T const &a, T const &b)
{
    return a > b ? a : b;
}

int main()
{
    int x = 10, y = 20;
    cout << "Max : " << Max(x, y) << endl;

    double p = 20.34, q = 20.40;
    cout << "Max : " << Max(p, q) << endl;

    string a = "Hello", b = "Hi";
    cout << "Max : " << Max(a, b) << endl;

    char ch1 = 'a', ch2 = 'b';
    cout << "Max : " << Max(ch1, ch2) << endl;

    return 0;
}