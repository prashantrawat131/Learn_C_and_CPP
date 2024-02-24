#include <stdio.h>

/*
This program is just a simple implementation of linear search.
It does not show the presence of multiple occurrences of an element.
It just show true when element is present atleast once.
Otherwise it will show false result or ELEMENT NOT FOUND.
If element is present then output will show the index of first occurence.
*/

int main()
{
    int arr[10] = {5, 633, 34, 64, 266, 778, 8653, 34, 54, 100};
    int key, size = 10;

    /*This flag is used to show that we have found the element
    at lease once and if not then the value of flag will be unaltered
    (i.e. flag==0) which shows that the element is not present.*/
    int flag = 0;

    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter key to seach: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // Here I am using array starting from 0.
            // You can also use (i+1) for non-programmer's perspective.
            printf("\n\nElement found at array index: %d", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("\n\nElement not found");
    }

    return 0;
}