/*
This is program to enter your contacts.
The program will save your contacts in an array.
Max 10 contacts can be saved.(No dynamic memory allocation)

In future I might develop this using dynamic memory and also
with a file also.

But for now let the data be static.
Only Insert, Show and Delete functionalities are there.

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#define MAX_SIZE 10
#define NAME_LENGTH 100
#define PHONE_NUM_LENGTH 20
#define SUCCESS 1
#define ERROR -1
#define FAILURE -2
#define UNDERFLOW -100
#define OVERFLOW 100

// Colors for the console
#define START_RED printf("\033[1;31m");
#define STOP_COLORING printf("\033[0m");
#define START_GREEN printf("\033[0;32m");

enum MENU_ITEM
{
    ADD_CONTACT = 1,
    SHOW_CONTACTS = 2,
    DELETE_CONTACT = 3,
    EXIT = 4
};

typedef struct Contact
{
    char name[NAME_LENGTH];
    char phoneNumber[PHONE_NUM_LENGTH];
} Contact;

void printMenu()
{
    printf("\n\nSelect an option:");
    printf("\n1. Add a contact");
    printf("\n2. Show contacts");
    printf("\n3. Delete a contact");
    printf("\n4. Exit");
    printf("\nEnter choice (1-4): ");
}

int addContact(Contact contacts[], int size)
{
    if (size == MAX_SIZE)
    {
        return OVERFLOW;
    }

    char name[NAME_LENGTH];
    char phoneNumber[PHONE_NUM_LENGTH];

    printf("\nEnter name of the person: ");
    fgets(name, NAME_LENGTH, stdin);
    name[strlen(name) - 1] = 0;

    printf("\nEnter phone number (10 digits): ");
    fgets(phoneNumber, PHONE_NUM_LENGTH, stdin);
    phoneNumber[strlen(phoneNumber) - 1] = 0;

    strcpy(contacts[size].name, name);
    strcpy(contacts[size].phoneNumber, phoneNumber);

    return SUCCESS;
}

void showContacts(Contact contacts[], int size)
{
    if(size==0){
        START_RED
        printf("\nNo contacts to show.");
        STOP_COLORING
    }
    printf("\nFollowing are your contacts");
    printf("\nS.No.\tPh. Number\tName");
    for (int i = 0; i < size; i++)
    {
        char *name = contacts[i].name;
        char *phoneNumber = contacts[i].phoneNumber;
        printf("\n%d  %s\t%s", (i + 1), phoneNumber, name);
    }
}

int deleteContact(Contact contacts[], int size)
{
    if (size == 0)
    {
        return UNDERFLOW;
    }

    showContacts(contacts, size);

    int sno;
    printf("\nEnter the S.No. of the contact to delete it: ");
    scanf("%d", &sno);
    if (sno > 0 && sno <= size)
    {
        int index = sno - 1;
        for (int i = index; i < size - 1; i++)
        {
            // Moving the array to coverup the vacant space.
            contacts[i] = contacts[i + 1];
        }

        // Erasing the previous data
        strcpy(contacts[size - 1].name, "");
        strcpy(contacts[size - 1].phoneNumber, "");

        return SUCCESS;
    }
    else
    {
        return FAILURE;
    }
}

int main()
{
    Contact contacts[10];
    int size = 0;
    int option = -1;
    while (option != EXIT)
    {
        sleep(1);
        printMenu();
        scanf("%d", &option);
        fgetc(stdin);
        switch (option)
        {
        case ADD_CONTACT:
            int addResult = addContact(contacts, size);
            if (addResult == SUCCESS)
            {
                size++;
                START_GREEN
                printf("\nContact Saved Successfully");
                STOP_COLORING
            }
            else
            {
                START_RED
                printf("\nUnable to insert contact");
                STOP_COLORING
            }
            break;

        case SHOW_CONTACTS:
            showContacts(contacts, size);
            break;

        case DELETE_CONTACT:
            int deleteResult = deleteContact(contacts, size);
            if (deleteResult == SUCCESS)
            {
                size--;
                START_GREEN
                printf("\nContact deleted successfully");
                STOP_COLORING
            }
            else if (deleteResult == UNDERFLOW)
            {
                START_RED
                printf("\nNo contacts found to delete.");
                STOP_COLORING
            }
            else if (deleteResult == FAILURE)
            {
                START_RED
                printf("\nS.No. not valid. Aborting!!!");
                STOP_COLORING
            }
            break;

        case EXIT:
            break;

        default:
            printf("\nPlease enter correct option:");
            break;
        }
    }

    return 0;
}

/*
References:

Using scanf and fgets at the same time: https://www.youtube.com/watch?v=lXYSW4_ojEk


*/