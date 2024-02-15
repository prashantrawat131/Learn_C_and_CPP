#include <stdio.h>

void BinarySearch(int *arr, int size, int key)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == key)
        {
            printf("\nElement '%d' found at index: %d\n", key, mid);
            break;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (arr[mid] != key)
    {
        printf("Element not found.");
    }
}

int main()
{
    // Array needs to be in sorted order for binary search
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10, key;

    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter key to seach: ");
    scanf("%d", &key);

    BinarySearch(arr, size, key);

    return 0;
}