#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int n)
{
   if(rear==N-1){
   printf("queue is full");
    }
   else if (front==-1 && rear==-1)
 {
   front =rear=0;
   queue[rear]=n;
  }
  else
  {
  rear++;
  queue[rear]=n;
  }
  }
void dequeue()
{
  if(front==-1&&rear==-1)
   {
   printf("queue is empty");
   }
  else if(front==rear){
   front=rear=-1;
   }
  else{
  printf("deleted element is %d",queue[front]);
   front++;
   }
}
void display()
{
  if(front==-1 && rear==-1)
  {
  printf("queue is empty:");
  }
else
{
for(int i=front;i<=rear;i++)
{
printf("queue is %d:",queue[i]);
}
}
}
void peek()
{
 if(front==-1 && rear==-1)
  {
  printf("queue is empty:");
  }
 else{
printf("front is:%d",queue[front]);
}
}
int main()
{
int choice;
int n;
while(1){
printf("press 1 for insert the element\n press 2 to delete the element\n press 3 for display the elements of queue\n press 4 to peek\n press 5 to exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the number to be inserted:\n");
       scanf("%d",&n);
       enqueue(n);
       break;
case 2:dequeue();
       break;
case 3:display();
      break;
case 4: peek();
      break;
case 5:exit(0);
default:printf("invalid choice\n");
}
}
return 0;
}
