#include"header.h"
#include<ctype.h>
int main()
{
        char op,os;
        ST *ptr=NULL;
	load_list(&ptr);
    do
    {
        printf(" *--------------------------------*\n");
        printf("      ***STUDENT RECORD MENU***    \n");
        printf(" *--------------------------------*\n");
        printf(" | A/a |     Add New Record       \n");
        printf(" | D/d |     Delete a Record      \n");
        printf(" | S/s |     Show the List        \n");
        printf(" | M/m |     Modify a Record      \n");
        printf(" | V/v |     Save                 \n");
        printf(" | T/t |     Sort the List        \n");
        printf(" | E/e |     Exit                 \n");
        printf(" *--------------------------------*\n");
        printf("\n");
        printf("Enter Your Choice:");
        scanf(" %c",&op);
       
      switch (toupper(op))
      {
        case'A':add_list(&ptr);
                break;

        case'D':delete_list(&ptr);
                break;

        case'S':show_list(&ptr);
                break;

        case'M':modify_list(&ptr);
                break;
    
        case'T':sort_list(&ptr);
                break;  

    	case'V':save_list(&ptr);
                break;
    
        case'E':exit_list(&ptr);
                break;

	default: 
		printf("invalid choice");
		break;

    
      }

printf("do you want to continue (y/n) :");
scanf( " %c",&os);
}while(os=='y');

}
