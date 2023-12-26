#include<stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;
void push(int element);
int pop();
void display();
void main()

{
int choice,element;
do{
printf("menu\n1-push\n2-pop\n3-dispay\n4-exit");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter the element to push");
scanf("%d",&element);
push(element);
break;
case 2:
element=pop(element);
if(element!=-1)
{
printf("%d popped from the stack",element);
}
break;
case 3:
display();
break;
case 4:
printf("exit");
break;
default:
printf("invalid choice");

}
}
while(choice!=4);

}
void push(int element)
{
if (top==MAX_SIZE-1)
{
printf("stack overflow");
}
else{
stack[++top]=element;
printf("%d pushed stack element",element);


}}
int pop()
{

if (top==-1){
printf("stack underflow");
return -1;
}else
{
return stack[top];

}}
void display(){
int i;
if (top==-1)
{
printf("stack is empty");

}else
{
printf("stack elements are");
for(i=0;i<=top;i++){
printf("%d",stack[i]);
}printf("\n");
}
}



