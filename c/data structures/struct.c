#include <stdio.h>

struct Person
{
    int age;
    int height;
} p;

// const is used to make it safe so that it is not modified.
// Using a pointer to save memory. (Pass by reference)
void printDetails(const struct Person *person)
{
    printf("\nAge: %d years\nHeight: %d units\n", person->age, person->height);
}

int main()
{
    p.age = 10;
    p.height = 30;

    struct Person p1;
    p1.age = 20;
    p1.height = 40;

    struct Person p2 = {
        p2.age = 30,
        p2.height = 50};

    struct Person p3 = {
        .age = 40,
        .height = 60};

    printDetails(&p);
    printDetails(&p1);
    printDetails(&p2);
    printDetails(&p3);

    return 0;
}