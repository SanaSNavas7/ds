#include <stdio.h>
#include <stdlib.h>
void insertatbeg();
int main()
{
int i,n;
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
return 0;
}
while(1)
{
int ch;
printf("enter 1 for insert at begining");
scanf("%d",&ch);
switch(ch)
{
case 1:insertatbeg();
break;
case 2:exit(0);
default:
printf("invalid");
}}
void insertatbeg()
{

newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
for(current=head;current!=0;current=current->next)
{
printf("%d->",current->data);
}
printf("NULL");
}

