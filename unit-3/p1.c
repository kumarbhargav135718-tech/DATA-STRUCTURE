#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

/* Create Linked List */
void create()
{
    struct node *newnode, *ptr;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(start == NULL)
        {
            start = newnode;
        }
        else
        {
            ptr = start;

            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            ptr->next = newnode;
        }
    }
}

/* Display Linked List */
void display()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("Linked List is empty.");
        return;
    }

    ptr = start;

    printf("Linked List: ");

    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

int main()
{
    create();
    display();

    return 0;
}
