#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void merge(int arr[], int start, int mid, int end)
{
    int rightArrPointer = mid + 1, leftArrPointer = start;
    while (rightArrPointer <= end && leftArrPointer < rightArrPointer)
    {
        if (arr[leftArrPointer] > arr[rightArrPointer])
        {
            int val = arr[rightArrPointer];
            int k = rightArrPointer;
            while (k > leftArrPointer)
            {
                arr[k] = arr[k - 1];
                k--;
            }
            arr[k] = val;
            rightArrPointer++;
        }
        else
        {
            leftArrPointer++;
        }
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void printArray(int a[], int n);
void mergeSort(int arr[], int start, int end);

int main()
{
    int arr[] = {8, 5, 7, 0, 9, 6, 1, 2, 4, 3};
    int size = 10;
    mergeSort(arr, 0, size-1);
    printArray(arr, size);
    return 0;
}

/*
Case Study: Helpful Github copilot CHAT.

While writing this piece of code. 
I was stuck with some bug.

Usually I don't use github copilot while learning
but this time to fix the bug I used it to find out
the bug and it did.

The bug was: I was putting size instead of size-1 
while calling the mergeSort initially.

This is the basic merge sort, I guess that's why 
copilot was so accurate but that was really helpful.
*/