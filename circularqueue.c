#include<stdio.h>
#define MAX 5
void enqueue(int element);
void dequeue();
void display();
void search();
int queue[MAX],front=-1,rear=-1,c,element,i,n,flag=0;
void main()
{
int choice;
do{
printf("\n1-insert\n2-delete\n3-display\n4-search\n5-exit\n");
printf("enter a choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the elements");
scanf("%d",&element);
enqueue(element);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
search();
break;
case 5:
printf("exit\n");
break;

default:
printf("not valid");
}
}while(choice!=5);}
void enqueue(int element)
{
if((rear+1)%MAX==front){
printf("queue is full");
}
else{
