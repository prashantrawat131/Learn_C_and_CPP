#include <stdio.h>

int add()
{
    /*
    The value 0 is assigned to x only the first time and
    after that for each call the value of x will be its
    previous updated value.
    */
    static int x = 0;
    x++;
    return x;
}

int main()
{
    add();
    add();
    int finalRes = add();

    printf("%d", finalRes);
    return 0;
}