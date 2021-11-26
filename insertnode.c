#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}node;
typedef struct node node;

node* insert_at_first(node *head,int data)
{
node *temp=(node*)malloc(sizeof(node));
temp->data=data;
temp->link=NULL;
temp->link=head;
head=temp;
return head;
}
void insert_at_last(node *head,int data)
{
node *ptr=head;
node *temp=(node*)malloc(sizeof(node));
temp->data=data;
temp->link=NULL;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=temp;
}

void print_data(node *head)
{
node *ptr=NULL;
ptr=head;
while(ptr!=NULL){
printf("%d",prt->data);
ptr=ptr->link;
}
}

int main()
{
node *head=(node*)malloc(sizeof(node));
head->data=10;
head->link=NULL;

node *current=(node*)malloc(sizeof(node)); 
current->data=11;
current->link=NULL;
head->link=current;

node *current=(node*)malloc(sizeof(node)); 
current->data=12;
current->link=NULL;
head->link->link=current;


return 0;
}
