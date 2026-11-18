#include <stdio.h>
#include <stdlib.h>
struct node
 { int data; struct node *next; };
int main() {
    struct node *head=NULL,*newnode,*temp,*prev;
    int n,i,ch,key;
    printf("Number of nodes: ");
     scanf("%d",&n);
    for(i=0;i<n;i++) {
        newnode=malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL) head=newnode;
        else temp->next=newnode;
        temp=newnode;
    }


    printf(".Delete value: ");
    scanf("%d",&ch);
    if(head==NULL)
     printf("List is empty");
    else if(ch==1)
    {
    temp=head; head=head->next; free(temp);
     }
    else if(ch==2) {
        if(head->next==NULL)
            { free(head); head=NULL; }
        else {
            temp=head;
            while(temp->next->next!=NULL) temp=temp->next;
            free(temp->next); temp->next=NULL;
        }
    } else if(ch==3) {
        printf("Value to delete: ");
         scanf("%d",&key);
        temp=head; prev=NULL;
        while(temp!=NULL && temp->data!=key)
        { prev=temp; temp=temp->next; }
        if(temp==NULL) printf("Node not found");
        else {
            if(prev==NULL) head=temp->next;
             else prev->next=temp->next;
            free(temp);
        }
    } else printf("Invalid choice");
    printf("\nList: ");
    for(temp=head;temp!=NULL;temp=temp->next)
     printf("%d -> ",temp->data);
    printf("NULL");
    return 0;
}
