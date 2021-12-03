#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

void del_alter(struct node**head);
int main()
{
struct node *head=(struct node*)malloc(sizeof(struct node));
head->data=5;
head->link=NULL;

struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=10;
ptr->link=NULL;
head->link=ptr;

ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=15;
ptr->link=NULL;
head->link->link=ptr;

ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=20;
ptr->link=NULL;
head->link->link->link=ptr;

del_alter(&head);
ptr=head;
while(ptr!=NULL){
printf("%d",ptr->data);
ptr=ptr->link;
}
return 0;
}
void del_alter(struct node**head)
{
int count=0;
struct node *temp=*head;
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr=*head;
while(ptr!=NULL)
{
count++;
ptr=ptr->link;
while(temp->link!=NULL){
printf("deleting nodes:-%d",ptr->data);
if(count%2==0)
{
temp=ptr;
ptr=ptr->link;
}
ptr->link=temp->link;
free(temp);
//temp=NULL;
}
}
}


