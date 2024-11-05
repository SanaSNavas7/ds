#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n,pos;
struct node {
int data;
struct node *next;
};
struct node *newnode,*current;
struct node *head=NULL;
 printf("enter size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
current=newnode;
}
else
{
current->next=newnode;
current=newnode;
}
}
printf("elements are");
for(current=head;current!=0;current=current->next)
{
printf("%d->",current->data);
}
printf("NULL");

newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
for(current=head;current!=0;current=current->next)
{
printf("%d->",current->data);
}
printf("NULL");
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter element to insert at end");
scanf("%d",&newnode->data);
newnode->next=NULL;
current=head;
while(current->next!=NULL)
{
current=current->next;
}
current->next=newnode;
for(current=head;current!=NULL;current=current->next)
{
printf("%d->",current->data);
}
printf("NULL");
newnode=(struct node*)malloc(sizeof(struct node));
printf("eneter position to inseert");
scanf("%d",&pos);
printf("enter element to insert");
scanf("%d",&newnode->data);
while(i<pos){
current=current->next;
i++;
}
newnode->next=current->next;
current->next=newnode;
current=head;
while(current!=NULL){
printf("%d->",current->data);
}
printf("NULL");
return 0;
}

