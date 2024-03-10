/*

In this file, I am using vector as an example
and I will apply most of the STL algorithms.

These algorithms can be applied on other suitable
data structures in almost the same way.

 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void printVector(vector<int> v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << "\n\n";
}

int main()
{
    vector<int> originalVector = {8, 5, 7, 0, 9, 6, 1, 5, 4};
    vector<int> v;

    // Sorting in ascending
    v = originalVector;
    sort(v.begin(), v.end());
    cout << "Sorting in ascending order\n";
    printVector(v);

    // Sorting in descending order
    v = originalVector;
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorting in descending order\n";
    printVector(v);

    // Reversing the vector
    v = originalVector;
    reverse(v.begin(), v.end());
    cout << "Reversing the vector\n";
    printVector(v);

    // Max and min element
    int maxEle = *max_element(v.begin(), v.end());
    int minEle = *min_element(v.begin(), v.end());
    cout << "Max: " << maxEle << " Min: " << minEle << "\n\n";

    // Adding all the values in the vector
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of all elements = " << sum << "\n\n";

    // Count the occurrence of an element
    int occurrence = count(v.begin(), v.end(), 5);
    cout << "Number of occurrences of 5 = " << occurrence << "\n\n";

    // finding an element in the vector
    if (find(v.begin(), v.end(), 2) != v.end())
    {
        cout << "2 is present in the vector\n\n";
    }
    else
    {
        cout << "2 is not present in the vector\n\n";
    }

    // binary search
    // Let's sort the array because binary search needs a sorted array
    sort(v.begin(), v.end());
    bool exists = binary_search(v.begin(), v.end(), 1);
    if (exists)
    {
        cout << "1 is present in the vector\n\n";
    }
    else
    {
        cout << "1 is not present in the vector\n\n";
    }

    // To make the vector max a heap
    make_heap(v.begin(), v.end());
    cout << "Max heap:\n";
    printVector(v);

    // to make the vector min heap
    make_heap(v.begin(), v.end(), greater<int>());
    cout << "Min heap:\n";
    printVector(v);

    return 0;
}