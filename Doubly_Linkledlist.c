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
break;

case 9:
printf("exit");
break;
default:
printf("not valid");
}}while(choice!=9);
}
struct node
{
int data;
struct node*next;
struct node*prev;
};
struct node*head,*tail;

static int size=0;
void insert_head()
{
int element;
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nenter the elememnt");
scanf("%d",&element);
newnode->data=element;
newnode->next=0;
newnode->prev=0;
if(head==0)
{
head=tail=newnode;
}
else{
head->prev=newnode;
newnode->next=head;
head=newnode;}
size++;
}
void insert_end()
{
int element;
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nenter the element");
 scanf("%d",&element);
newnode->data=element;
newnode->next=0;
newnode->prev=0;
if(tail==0)
{
head=newnode;
tail=newnode;
}
else{
tail->next=newnode;
newnode->prev=tail;
tail=newnode;}
size++;
}
void insert_pos()
{
struct node*newnode;
struct node*temp;
int i=1,element;
int position;

printf("\n enter the position");
scanf("%d",&position);

if(position<0 || position>size)
{
printf("position is invalid");
}


else if (position==0){
printf("\nenter the element");
scanf("%d",&element);

insert_head();


}
else if(position==size)
{printf("\nenter the element");
scanf("%d",&element);

insert_end();
                                              
