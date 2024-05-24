#include <iostream>

using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high)
{
    if (low >= high)
    {
        return -1;
    }
    int pivot = high;

    int k = low;
    while (k < high)
    {
        if (arr[k] <= arr[pivot])
        {
            swap(arr, low, k);
            low++;
        }
        k++;
    }
    swap(arr, low, pivot);
    pivot = low;
    return pivot;
}

void quickSort(int arr[], int low, int high)
{
    int pivot = partition(arr, low, high);
    if (pivot != -1)
    {
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int arr[] = {6, 7, 2, 5, 2, 9, 4, 5};
    int size = 8;

    cout << "Array before sorting\n";
    printArr(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "Array after sorting\n";
    printArr(arr, size);
    return 0;
}