#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
    {
        // base case
        return 1;
    }

    // recusion case
    return n * factorial(n - 1);
}

int main()
{
    // Printing factorial of numbers from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        int result = factorial(i);
        printf("Factorial of %d is %d\n", i, result);
    }

    return 0;
}
