#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *next;
};

struct node *top = NULL; // Initialize the stack top pointer

// Push function
void push(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = x;
    newnode->next = top;
    top = newnode;
    printf("%d pushed to stack\n", x);
}

// Display function
void display() {
    struct node *temp = top;
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Peek function
void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", top->data);
    }
}

// Pop function
void pop() {
    struct node *temp;
    if (top == NULL) {
        printf("No elements to pop\n");
        return;
    }
    temp = top;
    printf("Popped element: %d\n", top->data);
    top = top->next;
    free(temp);
}

// Main function
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Operations Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2: // Pop
                pop();
                break;
            case 3: // Peek
                peek();
                break;
            case 4: // Display
                display();
                break;
            case 5: // Exit
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
