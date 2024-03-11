/*
I will not discuss all the operators.
But only a few of them.
*/

#include <iostream>

using namespace std;

int main()
{
     /* Logical operators */
    cout << (5 && 6) << endl; // 1 is true
    cout << (0 && 6) << endl; // 0 is false
    // Above Same for || operator

    // Not operator
    cout << !(5 && 6) << endl; // 0 is false


    /* Bitwise operators */
    cout << (5 & 6) << endl; 
    // Logic behind above statement
    // 5 = 00000101
    // 6 = 00000110
    // 101 & 110 = 100 = 4

    // Same for | (OR) and ^ (XOR) operator

    // Not operator
    cout << ~5 << endl; // -6 , because 2's complement of 5(00000101) is 11111011 which is -6

    // Left shift and right shift
    cout << (5 << 1) << endl; // Changes 5 from 00000101 to 00001010 which is 10
    cout << (5 >> 1) << endl; // Changes 5 from 00000101 to 00000010 which is 2


    /* Comma Operator */
    int a = 5, b = 6;
    cout << (a, b) << endl; // 6, because it returns the last value
}