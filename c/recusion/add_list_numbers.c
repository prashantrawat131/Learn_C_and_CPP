#include <stdio.h>

int add(int *arr, int size)
{
    if (size == 0)
    {
        // base case
        return 0;
    }

    // recursion case
    return arr[size - 1] + add(arr, size - 1);
}

int main()
{
    int arr[] = {8, 5, 7, 0, 9, 1};
    int size = 6;

    int sum = add(arr, size);
    printf("Sum = %d\n", sum);
    return 0;
}