#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    srand(int) provides a random seed for the random number generation,
    otherwise it will generate the same random numbers each time.

    srand(1) is kind of default so using it or not using is actually same.

    But we can use some thing which changes every time like 'time' as parameter in srand().
    */

    srand(10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }

    printf("\n");

    // To get numbers in range [50, 60]
    printf("Numbers in range [50,60]:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", rand() % (60 - 50 + 1) + 50);
    }

    printf("\n");

    // To get numbers in floating point in range [0,1]
    printf("Numbers in floating point:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%f\n", ((double)rand() / RAND_MAX));
    }

    printf("\n");

    // Random strings
    printf("Random strings:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", (char)(rand() % ('z' - 'a' + 1) + 97));
    }

    return 0;
}