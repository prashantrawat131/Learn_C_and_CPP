/*

Find the max sum of a subarray from a given array.

Time Complexity: O(n)

*/

#include <stdio.h>

int main()
{
    int arr[8] = {-10, -2, 8, -5, 7, 9, -6, -3};
    int size = 8, maxSum = 0, currSum = 0;

    for (int i = 0; i < size; i++)
    {
        currSum = currSum + arr[i];

        if (currSum < 0)
        {
            currSum = 0;
        }
        else
        {
            if (currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }

    printf("Largest sub array has sum = %d", maxSum);

    return 0;
}


/*

References:
https://www.youtube.com/watch?v=HCL4_bOd3-4


*/