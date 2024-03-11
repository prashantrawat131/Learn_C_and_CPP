#include <iostream>
#include <utility>

using namespace std;

void printDetails(pair<int, string> s)
{
    cout << "Roll number: " << s.first << endl;
    cout << "Name: " << s.second << "\n\n";
}

int main()
{
    pair<int, string> student1(1, "Aston");
    pair<int, string> student2(2, "Brian");
    pair<int, string> student3 = make_pair(3, "Cathy");
    pair student4(4, "David");

    // creating student5 data from using student4 data
    pair student5(student4);

    printDetails(student1);
    printDetails(student2);
    printDetails(student3);
    printDetails(student4);
    printDetails(student5);
}