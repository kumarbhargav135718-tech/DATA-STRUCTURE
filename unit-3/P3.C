#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;


void insert_start()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = start;
    start = newnode;

    printf("Node inserted at starting.\n");
}


void insert_end()
{
    struct node *newnode, *ptr;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;


    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        ptr = start;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = newnode;
    }

    printf("Node inserted at end.\n");
}

void insert_after()
{
    int val;

    struct node *newnode, *ptr, *preptr;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    printf("Enter value after which you want to insert: ");
    scanf("%d", &val);

    ptr = start;
    preptr = ptr;

    while(ptr != NULL && ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("Value not found.\n");
        free(newnode);
        return;
    }

    newnode->next = ptr->next;
    ptr->next = newnode;


}

void display()
{
    struct node *ptr;

    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    ptr = start;

    printf("Linked List: ");

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}


int main()
{
    int choice;

    do
    {
        printf("\n--- Singly Linked List ---\n");
        printf("1. Insert at Starting\n");
        printf("2. Insert at End\n");
        printf("3. Display\n");
         printf("4. insert after\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert_start();
                break;

            case 2:
                insert_end();
                break;

            case 3:
                display();
                break;

                 case 4:
                insert_after();
                break;


            case 5:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
