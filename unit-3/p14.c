
void mergeLists()
{
    struct node *START2 = NULL;
    struct node *newnode, *temp, *temp2;
    int n, i, value;

    printf("\nEnter number of nodes for second list: ");
    scanf("%d", &n);

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

    printf("\nFirst List: ");
    temp = START;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    printf("Second List: ");
    temp2 = START2;

    while(temp2 != NULL)
    {
        printf("%d -> ", temp2->data);
        temp2 = temp2->next;
    }

    printf("NULL\n");

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
