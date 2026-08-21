#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *START = NULL;


/* 1. CREATE LINKED LIST */
void create()
{
    int n, i, value;
    struct node *newnode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(START == NULL)
        {
            START = newnode;
        }
        else
        {
            temp = START;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    printf("Linked list created successfully.\n");
}


/* 2. DISPLAY LINKED LIST */
void display()
{
    struct node *temp;

    if(START == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = START;

    printf("Linked List: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


/* 3. INSERT AT STARTING */
void insertStart()
{
    int value;
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &value);

    newnode->data = value;

    newnode->next = START;
    START = newnode;

    printf("Node inserted at starting.\n");
}


/* 4. INSERT AT END */
void insertEnd()
{
    int value;
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = NULL;

    if(START == NULL)
    {
        START = newnode;
    }
    else
    {
        temp = START;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("Node inserted at end.\n");
}


/* 5. INSERT AFTER SPECIFIC NODE */
void insertAfter()
{
    int num, value;
    struct node *temp, *newnode;

    printf("Enter node value after which you want to insert: ");
    scanf("%d", &num);

    temp = START;

    while(temp != NULL && temp->data != num)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Node not found.\n");
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for new node: ");
    scanf("%d", &value);

    newnode->data = value;

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Node inserted after %d.\n", num);
}


/* 6. INSERT BEFORE SPECIFIC NODE */
void insertBefore()
{
    int num, value;
    struct node *temp, *newnode;

    if(START == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Enter node value before which you want to insert: ");
    scanf("%d", &num);

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for new node: ");
    scanf("%d", &value);

    newnode->data = value;

    /* If specific node is first node */
    if(START->data == num)
    {
        newnode->next = START;
        START = newnode;

        printf("Node inserted before %d.\n", num);
        return;
    }

    temp = START;

    while(temp->next != NULL && temp->next->data != num)
    {
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        printf("Node not found.\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Node inserted before %d.\n", num);
}


/* 7. DELETE FIRST NODE */
void deleteFirst()
{
    struct node *temp;

    if(START == NULL)
    {
        printf("UNDERFLOW - List is empty.\n");
        return;
    }

    temp = START;
    START = START->next;

    free(temp);

    printf("First node deleted.\n");
}


/* 8. DELETE LAST NODE */
void deleteLast()
{
    struct node *temp, *last;

    if(START == NULL)
    {
        printf("UNDERFLOW - List is empty.\n");
        return;
    }

    /* Only one node */
    if(START->next == NULL)
    {
        free(START);
        START = NULL;

        printf("Last node deleted.\n");
        return;
    }

    temp = START;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    last = temp->next;

    temp->next = NULL;

    free(last);

    printf("Last node deleted.\n");
}


/* 9. DELETE SPECIFIC NODE */
void deleteSpecific()
{
    int num;
    struct node *temp, *deleteNode;

    if(START == NULL)
    {
        printf("UNDERFLOW - List is empty.\n");
        return;
    }

    printf("Enter value to delete: ");
    scanf("%d", &num);

    /* If first node contains the value */
    if(START->data == num)
    {
        temp = START;
        START = START->next;

        free(temp);

        printf("Node deleted.\n");
        return;
    }

    temp = START;

    while(temp->next != NULL && temp->next->data != num)
    {
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        printf("Node not found.\n");
        return;
    }

    deleteNode = temp->next;

    temp->next = deleteNode->next;

    free(deleteNode);

    printf("Node deleted.\n");
}


/* 10. MERGE TWO LINKED LISTS */
void mergeLists()
{
    struct node *START2 = NULL;
    struct node *newnode, *temp, *temp2;
    int n, i, value;

    printf("\nEnter number of nodes for second list: ");
    scanf("%d", &n);

    /* Create second linked list */
    for(i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(START2 == NULL)
        {
            START2 = newnode;
        }
        else
        {
            temp2 = START2;

            while(temp2->next != NULL)
            {
                temp2 = temp2->next;
            }

            temp2->next = newnode;
        }
    }

    /* Display first list */
    printf("\nFirst List: ");
    temp = START;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");


    /* Display second list */
    printf("Second List: ");
    temp2 = START2;

    while(temp2 != NULL)
    {
        printf("%d -> ", temp2->data);
        temp2 = temp2->next;
    }

    printf("NULL\n");


    /* Merge second list with first list */
    if(START == NULL)
    {
        START = START2;
    }
    else
    {
        temp = START;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = START2;
    }

    printf("\nAfter merging:\n");
    display();
}


/* MAIN FUNCTION */
int main()
{
    int choice;

    while(1)
    {
        printf("\n\n========== SINGLY LINKED LIST ==========\n");

        printf("1.  Create Linked List\n");
        printf("2.  Display Linked List\n");
        printf("3.  Insert at Starting\n");
        printf("4.  Insert at End\n");
        printf("5.  Insert After Specific Node\n");
        printf("6.  Insert Before Specific Node\n");
        printf("7.  Delete First Node\n");
        printf("8.  Delete Last Node\n");
        printf("9.  Delete Specific Node\n");
        printf("10. Merge Two Linked Lists\n");
        printf("11. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                insertStart();
                break;

            case 4:
                insertEnd();
                break;

            case 5:
                insertAfter();
                break;

            case 6:
                insertBefore();
                break;

            case 7:
                deleteFirst();
                break;

            case 8:
                deleteLast();
                break;

            case 9:
                deleteSpecific();
                break;

            case 10:
                mergeLists();
                break;

            case 11:
                printf("Program ended.\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
