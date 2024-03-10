/* 
It doesn't matter how many times you insert an element in the set, 
only one occurrence of that element will be present in the set.
 */


#include <iostream>
#include <set>

using namespace std;

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

    for (auto &x : s)
    {
        cout << x << endl;
    }

    return 0;
}