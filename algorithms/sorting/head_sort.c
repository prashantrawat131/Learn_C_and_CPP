#include <stdio.h>
#include <math.h>

/*
The array index starts from 0 and goes to size - 1.

The heap has two properties:
1) It is a complete binary tree.
2) It is either min or max heap.

Array representation of heap tree says that the element at 0 index
is the root and 1 index element is root's left child and 2 index
element is root's right child and this goes on and on.

Now only thing left is make the tree min heap and we will do that
by swapping the element but we will start from the 2nd last level.

Number of levels in a tree is equal to log(n)+1. Here log is in base 2
and we will take floor of the log result and add 1 to it.
*/

int getLevels(int n)
{
    return (int)log2(n) + 1;
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}


void heapify(int arr[], int size, int levels)
{

/*
I guess this is not the best implementation of heapify but it works fine
even though it over calculates sometimes but for now I want to leave it
as it is.

Might upgrade it in the future.
*/

    int index = 0;
    for (int i = levels - 1; i >= 0; i--)
    {
        index += pow(2, i);
    }
    for (int i = index; i >= 0; i--)
    {
        // In this loop we are converting the tree into min heap tree.
        int leftChildIndex = 2 * i + 1;
        int rightChildIndex = 2 * i + 2;

        if (leftChildIndex <= size - 1)
        {
            if (arr[leftChildIndex] < arr[i])
            {
                swap(arr, i, leftChildIndex);
                i = levels - 1;
            }
        }

        if (rightChildIndex <= size - 1)
        {
            if (arr[rightChildIndex] < arr[i])
            {
                swap(arr, i, rightChildIndex);
                i = levels - 1;
            }
        }
    }
}

void heapSort(int heap[], int size, int levels)
{
    heapify(heap, size, levels);

    if (size == 1)
    {
        return;
    }

    swap(heap, 0, size - 1);

    int newSize = size - 1;
    int newLevels = getLevels(newSize);
    heapSort(heap, newSize, newLevels);
}

int main()
{
    int arr[] = {53, 53, 663, 23, 75, 88, 546, 868, 6, 86666, 44, 7555, 22, 54, 647, 7675, 21, 0};
    int size = 18;
    int levels = getLevels(size);

    printf("\nArray before sorting:\n");
    printArray(arr, size);

    heapSort(arr, size, levels);

    // We will get the array in reverse order but it is not big of a deal.
    printf("\nArray after sorting:\n");
    printArray(arr, size);

    return 0;
}