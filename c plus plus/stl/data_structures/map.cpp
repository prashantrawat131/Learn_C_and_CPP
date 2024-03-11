#include <iostream>
#include <map>

using namespace std;

int main()
{
    // Here is a <Roll number, Name> mapping
    map<int, string> students;

    students.insert(pair(1, "Prashant"));
    students.insert(pair(2, "Samuel"));
    students.insert(pair(3, "Rajnikanth"));
    students.insert(pair(4, "George"));

    for (pair<int, string> x : students)
    {
        cout << "Roll number: " << x.first << " Name: " << x.second << endl;
    }

    // Another type of initilization
    map<int, int> data;
    data[1] = 101;
    data[2] = 102;
    data[3] = 103;
    cout << "\n\n";
    map<int, int>::iterator itr = data.begin();
    while (itr != data.end())
    {
        pair<int, int> x = *itr;
        cout << "Key: " << x.first << " Value: " << x.second << endl;
        itr++;
    }

    return 0;
}