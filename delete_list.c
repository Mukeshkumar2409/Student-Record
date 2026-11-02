#include "header.h"
void delete_list(ST **ptr)
{
    ST *temp;
    ST *prevnode = NULL;
    char choice;
    int d;

    printf("+-----------------------------------------+\n");
    printf("|  R/r  |  Delete using Roll number       |\n");
    printf("|  N/n  |  Delete using Name              |\n");
    printf("+-----------------------------------------+\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if (choice == 'R' || choice == 'r')
    {
        printf("Enter roll number: ");
        scanf("%d", &d);

        temp = *ptr;

        while (temp != NULL)
        {
            if (temp->roll == d)
            {
                if (prevnode == NULL)
                    *ptr = temp->next;
                else
                    prevnode->next = temp->next;

                free(temp);
                printf("Record deleted successfully.\n");
                return;
            }

            prevnode = temp;
            temp = temp->next;
        }

        printf("No data found.\n");
    }
    else if (choice == 'N' || choice == 'n')
    {
        char name[20];
        int roll;
        printf("Enter the name: ");
        scanf("%s", name);
        temp = *ptr;
        printf("\nMatching Records:\n");
    while (temp != NULL)
    {
    if (strcmp(temp->name, name) == 0)
    {
        printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    MARK  |\n");
    printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",temp->roll,temp->name,temp->mark);
    printf("+-------------------------------------------------+\n");
    }
    temp = temp->next;
    } 

    printf("\nEnter the Roll Number to delete: ");
    scanf("%d", &roll);

    /* Now delete using the roll number */
   temp = *ptr;
   prevnode = NULL;

while (temp != NULL)
{
    if (temp->roll == roll)
    {
        if (prevnode == NULL)
            *ptr= temp->next;
        else
            prevnode->next = temp->next;

        free(temp);
        printf("Record deleted successfully.\n");
        return;
    }

    prevnode = temp;
    temp = temp->next;
}

printf("Roll number not found.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
}


