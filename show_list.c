#include"header.h"
void show_list(ST **ptr)
      {
        ST *temp;
        temp= *ptr;
    if (*ptr == NULL)
        {
        printf("No records found.\n");
        return;
        }
    printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    MARK  |\n");
        while(temp!=NULL)
        {
    printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",temp->roll,temp->name,temp->mark);
       temp=temp->next;
        }
    printf("+-------------------------------------------------+\n");
      }


