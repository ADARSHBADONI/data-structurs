#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};
void create_node(struct node*head,int d);
int main(){
struct node*head=(struct node*)malloc(sizeof(struct node));
head->data=1;
head->link=NULL;

struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=2;
ptr->link=NULL;
head->link=ptr;
int o;
printf("enter the operation you want to perform");
scanf("%d "
int d;

printf("enter the data you want to enter in the created node:");
scanf("%d",&d); 
create_node(head,d);
ptr=head;
printf("\nnodes are:");
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->link;
}
}
void create_node(struct node*head,int d)
{
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=d;
temp->link=NULL;

struct node*ptr=NULL;
ptr=head;
while(ptr->link!=NULL){
ptr=ptr->link;
}
ptr->link=temp;
}
void del_alter_node(struct node*head)
{
int count=0;
struct node*ptr=NULL;
ptr=head;
struct node*temp;
while (ptr->link!=NULL)
{
count++;
temp=ptr;
ptr=ptr->link;
if(count%2==0)
temp->link=ptr->link;
free(ptr);
}
}














































