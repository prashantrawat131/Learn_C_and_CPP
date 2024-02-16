#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    // Different ways to declare string in c
    char name[] = "Prashant";
    char surname[] = {'R', 'a', 'w', 'a', 't'};
    char *address = "HNO-101 Green Street, Park Avenue, India";
    char *profile = malloc(30 * sizeof(char));
    strcpy(profile, "Software Developer");

    printf("%s\n", name);
    printf("%s\n", surname);
    printf("%s\n", address);
    printf("%s\n", profile);

    // Differet ways to declare array of strings
    char fruits[][20] = {"Banana", "Apple", "Orange", "Grapes"};

    char countries[3][20];
    strcpy(countries[0], "India");
    strcpy(countries[1], "Australia");
    strcpy(countries[2], "Russia");

    for (int i = 0; i < 4; i++)
    {
        printf("%s ", fruits[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", countries[i]);
    }
    printf("\n");

    // Copies only specified number of characters from one string to another.
    strncpy(name, countries[1], 8);
    printf("%s\n", name);

    /*
    Comparing strings using strcmp
    The following example compares 'aab' and 'aac'
    The result gives -1 because 'aab < 'aac'.
    First we compare the first character which is same
    then we compare second character which is also same.
    But int the third character b<c because of ASCII values.

    If str1 > str2 return 1
    If str1 == str2 return 0
    If srt1 < str2 return -1
    */
    char str1[] = "aab";
    char str2[] = "aac";
    printf("Compare = %d\n", strcmp(str1, str2));

    // Find a character in a string and printing its location as well.
    char game[] = "Football";
    char *result = strchr(game, 't');
    if (result)
    {
        int pos = result - game + 1;
        printf("Character found at position %d\n", pos);
    }
    else
    {
        printf("Character not found!\n");
    }

    // Splitting the string
    char para[] = "This is a big string";
    char *part = strtok(para, " ");
    printf("%s\n", part);
    while (part != NULL)
    {
        part = strtok(NULL, " ");
        printf("%s\n", part);
    }

    // Finding a word inside a sentence using strstr
    char bigStr[] = "Hi my name is Prashant. Hope you are fine.";
    char word[] = "name";
    char *res = strstr(bigStr, word);
    if (res)
    {
        int pos = res - bigStr + 1;
        printf("Word found at position %d\n", pos);
    }
    else
    {
        printf("Word not found\n");
    }

    // Parsing a string using sscanf
    char inputData[] = "Prashant Rawat;India;22";
    char fullName[20], countryName[20];
    int age;
    sscanf(inputData, "%[^;];%[^;];%d", fullName, countryName, &age);
    printf("%s from %s is %d years old\n", fullName, countryName, age);



    return 0;
}

/*
References:

https://www.youtube.com/playlist?list=PLfqABt5AS4FmSwyvP5a3mYsaksq6yR3-Z

https://cplusplus.com/reference/cstring/strtok/


*/