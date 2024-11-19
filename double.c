#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n,pos;
struct node {
int data;
struct node *next,*prev;
};
struct node *newnode,*current;
struct node *head=NULL;
 printf("enter size of linked list");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->prev=NULL;
int pos;
printf("enter position 1.at beginning 2. at end 3.anywhere");
scanf("%d",&pos);

if(pos==1)
{
    head=newnode;
    newnode->prev=NULL;
    newnode->next=NULL;
    current=newnode;

}
else if(pos==2) {
    for(current=head;current->next!=NULL;current=current->next){
        current->next=newnode;
        newnode->prev=current;
        newnode->next=NULL;
    }
}
else{
    
    while(i<pos)
    {

    }

}

