#include<stdio.h>
#include<stdlib.h>


void push(int value);
void pop();
void display();
void main()
{
int element,choice;
do
{
printf("1-push\n2-pop\n3-display\n4-exit\n");
printf("enter a choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter an element");
scanf("%d",&element);
push(element);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("exit");
break;
default:
printf("no such value");
break;
}}while(choice!=4);
}
struct node{
int data;
struct node*next;
};struct node*top;
void push(int value)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
                                                           
