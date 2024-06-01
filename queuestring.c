#include<stdio.h>
#include<string.h>

#define MAX 5
void enqueue(char element);
void dequeue();
void display();
void search();
int front=-1,rear=-1,c,i,flag=0;
char queue[MAX],element,n;
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
scanf("%s",&element);
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
void enqueue(char element)
{
if((rear+1)%MAX==front){
printf("queue is full");
}
else{
if(front==-1)
front=0;
rear=(rear+1)%MAX;
queue[rear]=element;
}}
void dequeue(){
if(front==-1)
{
printf("\nqueue is empty\n");
}
else if(front==rear){
printf("\nthe deleted element is:%c\n",queue[front]);
front=rear=-1;}
else{
printf("\nthe deleted element is:%c\n",queue[front]);
front=(front+1)%MAX;
}
}

void display()
{
int front_pos=front,rear_pos=rear;
if(front==-1)
{
printf("\nqueue is empty");
}
else{
printf("\n......\n");

if(front_pos>rear_pos)
{
while(front_pos>rear_pos)
{
printf("%c",queue[front_pos]);
front_pos=((front_pos+1))%MAX;
}
}
if (front_pos<=rear_pos){
for(i=front_pos;i<=rear_pos;i++){
printf("%c",queue[i]);
}

printf("\n....\n");}}}
void search()
{
printf("enter the value to search");
scanf("%s",&n);

if (front==-1)
{
printf("queue underflow");
}
else{
int front_pos=front,rear_pos=rear;
if (front_pos>rear_pos)
{
while(front_pos>rear_pos){
if(queue[front_pos]==n)
{
flag=1;
break;}
front_pos=(front_pos+1)%MAX;
}
}
if(front_pos<=rear_pos)
{
for(i=front_pos;i<rear_pos;i++)
{
if(queue[i]==n)
{
flag=1;
break;}}}}
if(flag==1)
{
printf("element is found");
}
else{
printf("element is not found");
}}
