#include"header.h"
void sort_list(ST **ptr)
{
    ST *temp,*swap;
    char choice,count;
    int d,i,j;

    printf("+-----------------------------------------+\n");
    printf("|  N/n  |  Sort by name                   |\n");
    printf("|  P/p  |  sort by percentage             |\n");
    printf("+-----------------------------------------+\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    temp=*ptr;
      while(temp!=0)
          {
              count++;
              temp=temp->next;
           }
      ST *arr[count];
      temp=*ptr;
      for(i=0;i<count;i++)
       {
        arr[i]=temp;
           temp=temp->next;
           }           

  // sort linked list by name
    if(choice=='n' || choice=='N')
    {
     for(i=0;i<count-1;i++)
         {
           for(j=i+1;j<count;j++)
            {
                 if(strcmp(arr[i]->name,arr[j]->name)>0)
                 {
                  swap=arr[i];
                  arr[i]=arr[j];
                  arr[j]=swap;
                 }
             }
         }

      //printing in sort by name
        printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
        for(i=0;i<count;i++)
        {
        printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",arr[i]->roll,arr[i]->name,arr[i]->mark);
        }
        printf("+-------------------------------------------------+\n");
    return;
    }// sort by name end here

   //sort by percentage
   if(choice=='p' || choice=='P')

    {
      for(i=0;i<count-1;i++)
     {
       for(j=i+1;j<count;j++)
        {      
         if(arr[i]->mark>arr[j]->mark)
         {
                  swap=arr[i];
          arr[i]=arr[j];
          arr[j]=swap;
         }
         }
     }
       
      //printing in sort by percent
        printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
    for(i=0;i<count;i++)
    {
    printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",arr[i]->roll,arr[i]->name,arr[i]->mark);
        }
    printf("+-------------------------------------------------+\n");

       return;
     }

    else
    {
    printf("invalid input\n");
    }


}


