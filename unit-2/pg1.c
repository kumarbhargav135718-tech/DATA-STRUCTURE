#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push()
{
    int val;

    if (top == MAX - 1)
    {
        printf("\nStack Overflow! Cannot insert element.\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &val);

        top++;
        stack[top] = val;

        printf("Inserted successfully.\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow! Stack is empty.\n");
    }
    else
    {
        printf("Deleted element is: %d\n", stack[top]);
        top--;
    }
}

    void peak()
    {
        if(top == -1)
        {
            printf("stack  is empty");
        }
        else
    {
            printf("TOP MOST element is %d ", stack[top]);
    }
}


    void update()
    {
        int i,x;
            printf("enter the element want to update ");
            scanf("%d",&i);

            if(top -i+1 == -1)
            {
                printf("empty");
            }
            else
            {
                printf("enter new value ");
                scanf("%d",&x);
                stack[top - i + 1] = x;
            }
    }

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        printf("\nStack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n------ STACK MENU ------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. peak\n");
        printf("4. update\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peak();
                break;

            case 4:
                update();
                break;

            case 5:
                display();
                break;


            case 6:
                printf("Program terminated.\n");
                exit(0);

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
}
