#include<stdio.h>
#include<stdlib.h>
void insert_head();
void insert_end();
void insert_pos();
void delete_head();
void delete_end();
void delete_pos();
void display();
void search();
void main()
{
int choice,element,position;
do{
printf("\n1-insert_head\n2-insert_end\n3-insert_pos\n4-delete_haed\n5-delete_end\n6-delete_pos\n7-display\n8-search\n9-exit");
printf("\nenter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:

insert_head();
break;
case 2:
insert_end();
break;
case 3:
insert_pos();
break;
case 4:
delete_head();
break;
case 5:
delete_end();
break;
case 6:

delete_pos();
break;
case 7:
display();
break;
case 8:
search();
               
