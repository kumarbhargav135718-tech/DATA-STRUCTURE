#include <stdio.h>

#define MAX 10

int queue[MAX];
int front=-1,rear=-1;

void insert()
{
    int val;

    if(rear==MAX-1)
        printf("Queue Overflow\n");
    else
    {
        printf("Enter Value: ");
        scanf("%d",&val);

        if(front==-1)
            front=0;

        queue[++rear]=val;
    }
}

void delete()
{
    if(front==-1 || front>rear)
        printf("Queue Underflow\n");
    else
        printf("Deleted = %d\n",queue[front++]);
}

void display()
{
    int i;

    if(front==-1 || front>rear)
        printf("Queue Empty\n");
    else
    {
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                insert();
                 break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default: printf("Invalid Choice");
        }
    }
}
