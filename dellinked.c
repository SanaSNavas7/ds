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

printf("enter position to delete");
scanf("%d",&pos);
    current = head;

     for (i = 1; i < pos-1  && current != NULL; i++) {
        current = current->next;
    }

       if (pos == 1) {
        head=head->next;
 
    } else if(current->next==NULL)
{
current->next=NULL;
} 
else{
current->next=current->next->next;

}
 
     printf("Elements after deletion at position %d: ", pos);
    for (current = head; current != NULL; current = current->next) {
        printf("%d->", current->data);
    }
    printf("NULL\n");

    return 0;
}