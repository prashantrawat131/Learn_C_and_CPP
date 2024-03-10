#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> fruits;

    fruits.push("Apple");
    fruits.push("Banana");
    fruits.push("Dragon fruit");
    fruits.push("Grapes");

    while (!fruits.empty())
    {
        cout << fruits.top() << endl;
        fruits.pop();
    }

    return 0;
}