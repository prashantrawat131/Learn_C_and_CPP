#include <stdio.h>

/*
Size of the Animal union will be equal to the size of the
largest element in the union. In this case the size of the
laegeest element is 20 which is is the name field.
Union is used for saving memory space.*/
union Animal
{
    int legs;
    char name[20];
};

int main()
{
    union Animal tiger = {
        .legs = 4,
        .name = "Tiger"};

    printf("Size :%d\n", sizeof(tiger));

    /*
    Here the value of legs got changed because we assigned
    the name after we assigned legs. The name field replaces
    the space acquired by the legs field.
    */
    printf("Legs: %d\tName: %s\n", tiger.legs, tiger.name);

    tiger.legs = 4;

    /*
    Second time the name
    field is replaced with the legs data.
    */
    printf("Legs: %d\tName: %s\n", tiger.legs, tiger.name);

    return 0;
}