#include <stdio.h>

/*
Insertion Sort:
It is like sorting cards placed on table.
We put these cards one-by-one on our hand.
We only insert a card in the sorted order.

Example:
If I pick 1 and then 3 and then 2
I will place 2 between 1 and 3.

This shows that insertion sort is online i.e. it can
sort a list as it arrives.

In programming we have to shift 3 to the next position
and place 2 at 3's position. I will use this logic to
implement this alogrithm.
*/

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {8, 5, 7, 0, 9, 6, 1, 4, 2, 3};

    int i, j, k, key, size = 10;

    printf("Array before sorting:\n");
    printArr(arr, size);

    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            j--;
        }

        k = i;
        while (k != j + 1)
        {
            arr[k] = arr[k - 1];
            k--;
        }
        arr[k] = key;

        printf("After 1st iteration:\n");
        printArr(arr, size);
    }

    printf("FINAL sorting:\n");
    printArr(arr, size);
}

/*
References:
https://www.geeksforgeeks.org/c-program-for-insertion-sort/

*/
