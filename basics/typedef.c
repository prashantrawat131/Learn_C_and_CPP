#include <stdio.h>

struct Point
{
    int x, z;
    int y;
};

/*
Here we have decalred a name for 'struct Point'
so we do not have write it everytime.
We can just use 'SinglePoint' instead of 'struct Point'.
*/
typedef struct Point SinglePoint;

int main()
{

    // Simple decalaration
    struct Point p1;
    p1.x = 10;
    p1.y = 20;
    p1.z = 30;
    printf("%d %d %d\n", p1.x, p1.y, p1.z);

    // Decalaration using typedef
    SinglePoint p2;
    p2.x = 100;
    p2.y = 200;
    p2.z = 300;
    printf("%d %d %d\n", p2.x, p2.y, p2.z);

    return 0;
}