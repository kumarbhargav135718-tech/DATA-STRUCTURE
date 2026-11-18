c

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void deleteNode(int value) {
    struct node *temp = head;
    struct node *prev = NULL;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->data == value) {
        head = head->next;
        free(temp);
        printf("Node deleted successfully\n");
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("Node deleted successfully\n");
}

void insert(int value) {
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    printf("Original Linked List:\n");
    display();

    deleteNode(30);

    printf("After Deletion:\n");
    display();

    return 0;
}

