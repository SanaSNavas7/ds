#include <stdio.h>
#include <stdlib.h>

void insert();
void delete();
void inorder_succ();
void inorder();
void preorder();
void postorder();
void display();

struct node
{
    int data;
    struct node *left, *right;
};

struct node *root = NULL;
struct node *newnode;
int d;
int main()
{
    while (1)
    {
        int choice;
        printf("Enter 1.insert()")
        printf("enter choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid");
        }
    }
    return 0;
}

void insert()
{

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter element");
    scanf("%d", &newnode->data);
    newnode->left = newnode->right = NULL;
    if (root == NULL)
    {
        root = newnode;
        newnode->left = newnode->right = NULL;
    }
    else
    {
        struct node *current = root;
        struct node *parent = NULL;

        while (current != NULL)
        {
            parent = current;
            if (newnode->data > current->data)
            {

                current = current->right;
            }
            else
            {

                current = current->left;
            }
        }

        if (newnode->data > parent->data)
        {
            parent->right = newnode;
        }
        else
        {
            parent->left = newnode;
        }
    }
}

void inorder_succ()
{
    struct node *current = root;
    struct node *parent = NULL;
    int d;
    while (current != NULL)
    {
        parent = current;

        current = current->right;
    }
    d = parent->left->data;
    
}

void delete()
{
    int ele;
    printf("Enter element to be deleted");
    scanf("%d", &ele);
    struct node *current = root;
    struct node *parent = NULL;

    if (root == NULL)
    {
        printf("Tree is empty");
    }
    else if (root->data == ele)
    {
        if (root->left == NULL && root->right == NULL)
            ;

        free(root);
    }
    else
    {
        struct node *current = root;
        struct node *parent = NULL;

        while (current->data == ele)
        {
            current = parent;
            if (current->left == NULL)
            {

              parent->right = current->right;
            }
            else
            {
               parent->left = current->left;
            }

            if (current->left != NULL && current->right != NULL)
            {inorder_succ();
                current->data = d;
                current->left = NULL;
            }
        }

            while (current != NULL)
            {
                parent = current;
                if (newnode->data > current->data)
                {

                    current = current->right;
                }
                else
                {

                    current = current->left;
                }
            }
        }
    }
    void display()
    {
inorder();
postorder();
preorder();
    }
        void inorder()
        {
            
            if (root == NULL)
            {
                printf("empty");
            }
            else
            {
                inorder(root->left);
                printf("%d ", root->data);
                inorder(root->right);
            }
        }
        void preorder()
        {
            if (root == NULL)
            {
                printf("empty");
            }
            else
            {

                printf("%d ", root->data);
                preorder(root->left);
                preorder(root->right);
            }
        }
        void postorder()
        {
            if (root == NULL)
            {
                printf("empty");
            }
            else
            {
                postorder(root->left);

                postorder(root->right);
                printf("%d ", root->data);
            }
        }
    
