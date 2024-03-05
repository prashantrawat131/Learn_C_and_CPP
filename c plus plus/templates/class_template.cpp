#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

template <class T>
class Stack
{
public:
    vector<T> elements;
};

int main()
{
    Stack<int> intStack;
    intStack.elements.push_back(10);
    intStack.elements.push_back(20);
    intStack.elements.push_back(30);
    for (auto &it : intStack.elements)
    {
        cout << it << " ";
    }
    cout << "\n";


    Stack<string> stringStack;
    stringStack.elements.push_back("Apple");
    stringStack.elements.push_back("Banana");
    stringStack.elements.push_back("Pineapple");
    for (auto &it : stringStack.elements)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}