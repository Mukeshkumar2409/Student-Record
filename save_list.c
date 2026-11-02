#include"header.h"
void save_list(ST **ptr)
       {
        FILE *fp;
       ST *temp;

      fp = fopen("studentdata.txt", "w");

      if(fp == NULL)
      {
      printf("File cannot be opened.\n");
      return;
      }

      temp = *ptr;

       while(temp != NULL)
       {
        fprintf(fp, "%d %s %.2f\n",temp->roll,temp->name,temp->mark);

        temp = temp->next;
        }

        fclose(fp);

        printf("Data saved successfully.\n");
        }
void load_list(ST **ptr)
{
    FILE *fp;
    ST *newnode, *last = NULL;

    fp = fopen("studentdata.txt", "r");

    if (fp == NULL)
    {
        printf("No saved file found.\n");
        return;
    }

    while (1)
    {
        newnode = malloc(sizeof(ST));

        if (newnode == NULL)
        {
            printf("Memory Allocation Failed\n");
            fclose(fp);
            return;
        }

        if (fscanf(fp,"%d %s %f",&newnode->roll,newnode->name,&newnode->mark) != 3)
        {
            free(newnode);
            break;
        }

        newnode->next = NULL;

        if (*ptr == NULL)
        {
            *ptr = newnode;
            last = newnode;
        }
        else
        {
            last->next = newnode;
            last = newnode;
        }
    }

    fclose(fp);
    printf("Student data loaded successfully.\n");
}



