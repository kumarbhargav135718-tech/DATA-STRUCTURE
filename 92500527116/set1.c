#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int val;
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    }
     else {
        printf("Enter value to push: ");
        scanf("%d", &val);

        top++;
        stack[top] = val;

    printf("%d pushed to stack.\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! .\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void printStack() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printStack();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice!.\n");
        }
    }
    return 0;
}
