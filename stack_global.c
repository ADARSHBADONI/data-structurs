#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int n);
void pop(int n);
void display();
int top=-1,stack[max];
int main()
{
int choice;
int n;
while(1){
printf("press 1 for insert the element\n press 2 to delete the element\n press 3 for display the elements of stack\n press 4 to exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the number to be inserted:\n");
       scanf("%d",&n);
       push(n);
       break;
case 2:printf("enter the number to be deleted:\n");
       scanf("%d",&n);
       pop(n);
       break;
case 3:display();
      break;
case 4: exit(0);
default:printf("invalid choice\n");
}
}
return 0;
}

void push(int n)
{
if (top==max-1)
{
printf("stack is full\n");
}
else
{
top++;
stack[top]=n;
}
}

void pop(int n)
{
 int del;
 if(top==-1)
 {
 printf("stack is empty\n");
 }
else
{
del=stack[top];
printf("poped element is %d",del);
top--;
}
}
void display()
{
if (top==-1)
{
printf("stack is empty\n");
}
else
{
for(int i=top;i>=0;i--)
printf("%d ",stack[i]);
}
}
