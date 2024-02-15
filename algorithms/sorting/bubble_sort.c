#include <stdio.h>

/*
BUBBLE SORT.

The best case time complexity of bubble sort is reached when 
the array is already sort.

We can check whether the array is in sorted state even before
all the loops are finish by using flag to check whether any swapping
happened in the inner loop.

If no swapping happens in the inner loop then it means that
the array has reached the sorted order and now there is no
need to proceed further. This helps in minimizing the computations
and this is the one of the biggest reason why bubble sort
has best case of O(n).

Otherwise it has an average and worst case of O(n^2).
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

    int i, j, temp, size = 10;

    printf("Array before sorting:\n");
    printArr(arr, size);

    for (i = 0; i < size; i++)
    {
        int flag = 0;
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1; // swapping happened.
            }
        }

        if (flag == 0)
        {
            // This means no swapping is performed because the array is sorted.
            break;
        }

        printf("After Round %d:\n", (i + 1));
        printArr(arr, size);
    }

    printf("Array after sorting:\n");
    printArr(arr, size);

    return 0;
}