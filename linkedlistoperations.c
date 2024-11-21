#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int i;
void insertbeg();
void insertend();
void insertpos();
void deletebeg();
void deleteend();
void deletepos();
void search();
void display();
struct node *temp, *newnode;
struct node *head = NULL;
int main()
{
    while (1)
    {
        int choice;
        printf("enter 1.insertbeg \n  2.insertend \n 3.insertpos \n 4.deletebeg \n 5.deleteend \n 6.deletepos \n 7.search \n 8.display \n 9.exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertend();
            break;
        case 3:
            insertpos();
            break;
        case 4:
            deletebeg();
            break;
        case 5:
            deleteend();
            break;
        case 6:
            deletepos();
            break;
        case 7:
            search();
            break;

        case 8:
            display();
            break;

        case 9:
            exit(0);
            break;
        default:
            printf("invalid");
            break;
        }
    }
    return 0;
}
void insertbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter element to insert");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}
void insertend()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter element to insert");
    scanf("%d", &newnode->data);
    while (temp->next != NULL)
    {
        temp=temp->next;

    }
    temp->next=newnode;
    newnode->next = NULL;
}
void insertpos()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    int pos;
    printf("enter position to insert");
    scanf("%d", &pos);
    printf("enter element to insert");
    scanf("%d", &newnode->data);
    if (pos == 1)
    {
        insertbeg();
    }
    else
    {
        temp=head;

        for (i = 1; i < pos - 1; i++)
        {
            temp=temp->next;
            
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void deletebeg()
{

    head = head->next;
}
void deleteend()
{
    temp = head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
void deletepos()
{

    int pos;
    printf("enter position to delete");
    scanf("%d", &pos);
 temp=head;
    if (pos == 1)
    {
        deletebeg();
    }
    else
    {
        
        for (i = 1; i < pos-1; i++)

        {
           temp=temp->next;
        }
         temp->next = temp->next->next;
         
    }
    
}
void search()
{
    temp=head;
    int key,flag=0;
    printf("enter element to search");
    scanf("%d",&key);
    while(temp->next!=NULL)
    {
       
        if(temp->data==key){
            flag=1;
            break;
        }
         temp=temp->next;
    }
    if(flag==1)
    {
        printf("element found ");
    }
    else{
        printf("element not found ");
    }
    

}
void display()
{
    struct node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty.\n");
    }
    while (temp != NULL)
    {
        printf("%d->", temp->data);

        temp = temp->next;
    }
    printf("NULL");
}
