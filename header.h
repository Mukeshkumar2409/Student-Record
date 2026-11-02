#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student {
    int roll;
    char name[20];
    float mark;
    
    struct student *next;
}ST;

void add_list(ST **);
void del_list(ST **);
void show_list(ST **);
void modify_list(ST **);
void save_list(ST **);
void sort_list(ST **);
void exit_list(ST **);
void load_list(ST **);



