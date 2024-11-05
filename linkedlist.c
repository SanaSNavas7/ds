#include <stdio.h>
#include <stdlib.h>
int main()
{
struct node {
int data;
struct node *next;
};
struct node *newnode,*current;
struct node *head=NULL;
int main()
{
int i,n;
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
printf("Linked list");
for(current=head;current!=0;current=current->next)
{
printf("%d->",current->data);
}
printf("NULL");
return 0;
}}





