#include"header.h"
void add_list(ST **ptr)
{
    ST *newnode;
    newnode=(ST*)malloc(sizeof(ST));
    printf("enter the name: ");
    scanf(" %s",newnode->name);
    printf("enter the percentage:");
    scanf("%f",&newnode->mark);
    newnode->next=NULL;
        if(*ptr==0)
    {
        newnode->roll=1;
        *ptr=newnode;
    }
    else
    {
       ST *last=*ptr;
       while(last->next!=NULL)
           last=last->next;
       newnode->roll = last->roll+1;
        last->next = newnode;
    }


}
