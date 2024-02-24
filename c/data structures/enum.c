#include <stdio.h>

enum RAINBOW
{
    VIOLET, // 0
    INDIGO, // 1
    BLUE,   // 2
    GREEN,  // 3
    YELLOW, // 4
    ORANGE, // 5
    RED     // 6
};

enum TOPPER
{
    FIRST = 1,
    SECOND = 2,
    THIRD = 3
};

// We can only specify only the first one and others will follow.
enum GAME
{
    LUDO = 10,
    CHESS,
    SUDUKO
};

int main()
{
    enum RAINBOW c = YELLOW;
    printf("%d\n", c);

    enum TOPPER t = FIRST;
    printf("%d\n", t);

    enum GAME g = SUDUKO;
    printf("%d\n", g);
    
    return 0;
}