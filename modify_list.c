#include"header.h"
void modify_list(ST **head)
{
    ST *temp;
    ST *prevnode = NULL;
    char choice;
    int oldroll;

    printf("+-----------------------------------------+\n");
    printf("|  R/r  |  Roll number                    |\n");
    printf("|  N/n  |  Name                           |\n");
    printf("|  P/p  |  Percentage                     |\n");
    printf("+-----------------------------------------+\n");
    printf("\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    
    //rol number modify start
    if (choice == 'R' || choice == 'r')
    {
        int newroll;
            printf("Enter roll number:");
            scanf("%d", &oldroll);
        printf("enter the new rollnumber\n");
        scanf("%d",&newroll);
            temp=*head;
            while(temp!=0)
                 {
                   if(temp->roll==oldroll)
            {
                     temp->roll=newroll;
             return;
            }
                     temp=temp->next;
          }
            printf("roll no not found\n");  
    }//rol number 

    //name 
    if (choice == 'N' || choice == 'n')
    {
        char newname[20],name[20];
            int oldroll,flag=0;
        float newpercent;
            printf("Enter the name: ");
            scanf("%s",name);
            temp = *head;
            while (temp != NULL)
                 {
                  if (strcmp(temp->name, name) == 0)
                    {
             printf("           ***Matching Records***          \n");
                     printf("+-------------------------------------------------+\n");
                     printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
                 printf("+-------------------------------------------------+\n");
                     printf("| %-7d | %-20s | %8.2f%%      |\n",temp->roll,temp->name,temp->mark);
                 printf("+-------------------------------------------------+\n");
             flag=1;
                    }
                    temp = temp->next;
                  }
        if(flag==0)
        {
            printf("no match found\n");
                return;
            }
            printf("\nEnter the Roll Number : ");
            scanf("%d", &oldroll);
            printf("modify field\n");
            printf("+-----------------------------------------+\n");
            printf("|  N/n  |  Name                           |\n");
            printf("|  P/p  |  Percentage                     |\n");
            printf("+-----------------------------------------+\n");
            printf("\n");
            printf("Enter your choice: ");
            scanf(" %c", &choice);
            if (choice == 'N' || choice == 'n')
              {
                //chenge name
                printf("enter the new name:");
                scanf("%s",newname);
                temp=*head;
                while(temp!=0)
                   {
                   if(temp->roll==oldroll)
           {
                   strcpy(temp->name,newname);
               return;
           }
                   temp=temp->next;
                   }
                  printf("roll no not found\n");
               } 
  
           if (choice == 'p' || choice == 'P')
             {      
              //change percent
               printf("enter the new mark:");
               scanf("%f",&newpercent);
               temp=*head;
               while(temp!=0)
                  {
                  if(temp->roll==oldroll)
              {
                      temp->mark=newpercent;
                     break;
              }
                  temp=temp->next;
                  }
              }
             else
           printf("invalid input\n");
      }//name to modiy end


  //precent to modify start here
 if (choice == 'P' || choice == 'p')
    {
            char newname[20],name[20];
            int oldroll,flag=0;
            float newmark,oldmark;
            printf("Enter the mark: ");
            scanf("%f",&oldmark);
            temp = *head;
            while (temp != NULL)
                 {
                  if (temp->mark == oldmark)
                    {
                     printf("            ***Matching Records***\n");
                     printf("+-------------------------------------------------+\n");
                     printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
                     printf("+-------------------------------------------------+\n");
                     printf("| %-7d | %-20s | %8.2f%%      |\n",temp->roll,temp->name,temp->mark);
                     printf("+-------------------------------------------------+\n");
                     flag=1;
                    }
                    temp = temp->next;
                  }
            if(flag==0)
            {
                    printf("no match found\n");
                    return;
            }
            printf("\nEnter the Roll Number : ");
            scanf("%d", &oldroll);
            printf("modify field\n");
            printf("+-----------------------------------------+\n");
            printf("|  N/n  |  Name                           |\n");
            printf("|  P/p  |  Percentage                     |\n");
            printf("+-----------------------------------------+\n");
            printf("\n");
            printf("Enter your choice: ");
            scanf(" %c", &choice);
            if (choice == 'N' || choice == 'n')
              {
                //chenge name
                printf("enter the new name:");
                scanf("%s",newname);
                temp=*head;
                while(temp!=0)
                   {
                   if(temp->roll==oldroll)
                   {
                       strcpy(temp->name,newname);
                       return;
                   }
                   temp=temp->next;
                   }
                  printf("roll no not found\n");
               }
         if (choice == 'p' || choice == 'P')
             {
              //chenge percent
               printf("enter the new mark:");
               scanf("%f",&newmark);
               temp=*head;
               while(temp!=0)
                  {
                  if(temp->roll==oldroll)
                      {
                      temp->mark=newmark;
                      break;
                      }
                  temp=temp->next;
                  }
              }
             else
               printf("invalid input\n");

    }//percent to modify end here
 else
   {
     printf("invalid input\n");
         return;
    }
}


