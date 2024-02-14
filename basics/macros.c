#include <stdio.h>

#define SIZE 20
#define PRODUCT(X, Y) X *Y
// Here %p is show the memory address and #X is used to show the real name of the variable.
// The \ is use for next line and we can use it as many times we want.
#define PRINT_INT(X)\
printf(#X " is %d\t%p\n", X, &X);

int main()
{

    int a = 10;

    printf("%d\n", SIZE);

    // 20 + 1 * 10 = 30
    printf("%d\n", PRODUCT(20 + 1, 10));

    PRINT_INT(a);

    return 0;
}