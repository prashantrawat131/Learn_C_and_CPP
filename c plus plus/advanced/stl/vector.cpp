#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7};

    // Initializing vector with size and a default value for all the elements
    vector<int> v3(10, -1);

    // inserting values
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    int size = v1.size();
    cout << "Size of vector is: " << size << endl;

    // iterating through elements
    vector<int>::iterator itr = v1.begin();
    while (itr != v1.end())
    {
        cout << *itr << " ";
        itr++;
    }
    cout << endl;

    // another way to iterate through elements
    for (auto &x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    // Reverse traversing a vector
    vector<int>::reverse_iterator ritr = v1.rbegin();
    while (ritr != v1.rend())
    {
        cout << *ritr << " ";
        ritr++;
    }
    cout << endl;

    // Removing elements
    v1.pop_back();
    v1.pop_back();

    cout << "After deleting some elements\n";
    for (auto &x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

// Removing elements from vector v3 till it becomes empty
    while (!v3.empty())
    {
        v3.pop_back();
    }

    return 0;
}

/*

Checkout this page for more functions in vector:
https://cplusplus.com/reference/vector/vector/

*/