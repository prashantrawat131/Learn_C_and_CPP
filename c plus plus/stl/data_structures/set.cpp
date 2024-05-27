/*
It doesn't matter how many times you insert an element in the set,
only one occurrence of that element will be present in the set.
 */

#include <iostream>
#include <set>

using namespace std;

void printSet(set<int, greater<int>> &s)
{
    for (auto &x : s)
    {
        cout << x << " ";
    }

    cout << "\n";
}

int main()
{
    /* Sets usually store data in ascending order but
    we are using greater<int> which
    forces the set to store it in the descending order */
    set<int, greater<int>> s;

    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(0);
    s.insert(2);

    printSet(s);

    s.erase(1);
    cout << "Set after erasing 1\n";
    printSet(s);

    if (s.find(2) != s.end())
    {
        cout << "2 is present in set\n";
    }

    if (!s.empty())
    {
        cout << "Set is not empty\n";
    }
    else
    {
        cout << "Set is empty\n";
    }

    
    return 0;
}