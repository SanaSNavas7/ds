#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void insertbeg();
void insertend();
void insertpos();
void deletebeg();
void deleteend();
void deletepos();
void search();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *temp, *newnode;
struct node *head = NULL;

int main()
{
    while (1)
    {
        int choice;
        printf("\n------Enter your choice-----\n1.Insert_Beginning\n2.Insert_End\n3.Insert_Position\n4.Delete_Beginning\n5.DElete_End\n6.Delete_position\n7.Search\n8.Display\n9.Exit\n");
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
            printf("Invalid choice");
        }
    }
}
void insertbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        newnode->next = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
    }

    head = newnode;
}

void insertend()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert : ");
    scanf("%d", &newnode->data);
    temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}

void insertpos()
{
    int pos, i;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("enter element to insert");
    scanf("%d", &newnode->data);
    temp = head;
    if (pos == 1)
    {
        insertbeg();
    }
    else
    {
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;

        temp->next = newnode;
    }
}

void deletebeg()
{
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else if (head->next == head)
    
        {
            free(head);
            head = NULL;
        }
        else
        {

            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = head->next;
            
            head = head->next;
            free(temp);
        }
    }


void deleteend()
{
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        temp = head;
        free(temp);
    }
}

void deletepos()
{
    temp = head;
    int pos, i;
    if (head == NULL)
    {
        printf("List is empty");
    }

    printf("enter position to delete");
    scanf("%d", &pos);
    if (pos == 1)
    {
        deletebeg();
    }
    else
    {
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        printf("%d", temp->data);
        temp->next = temp->next->next;
        free(temp);
    }
}

void search()
{
    int ele, flag = 0;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    printf("Enter element to search: ");
    scanf("%d", &ele);

    while (temp != head)
    {
        if (temp->data == ele)
        {
            flag = 1;
            printf("Element %d found in the list.\n", ele);
            break;
        }
        temp = temp->next;
    }

    if (!flag)
    {
        printf("Element %d not found in the list.\n", ele);
    }
}

void display()
{
    temp = head;
    if (head == NULL)
    {
        printf("List is empty\n");
    }

    printf("The elements in the list are: ");
    while (temp->next != head)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("%d\n", temp->data);
}
