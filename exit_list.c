#include"header.h"

void exit_list(ST **ptr)
{
    char op;

    printf("S/s : Save and Exit\n");
    printf("E/e : Exit Without Saving\n");
    printf("\n");
    printf("Enter your choice : ");

    scanf(" %c", &op);

    switch(op)
    {
        case 's':
             save_list(&(*ptr));
             break;

        case 'e':
            printf("Exiting Without Saving Data...\n");
              break;

        default:
            printf("Invalid Option!!\n");
            break;
    }
}



