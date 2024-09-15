#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
static void reverse(struct Node**head_ref)
{
    struct node*prev=NULL;
    struct node*current=*head_ref;
    struct node*next = NULL;
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head_ref=prev;
    }
void push(struct node**head_ref,int new_data)
{
    struct node*new node=(struct node*)malloc(sizeof(struct node));

    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void printList(struct node*head);
{
    struct node**temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct node*head=NULL;
    push(&head,8);
    push(&head,7);
    push(&head,6);
    push(&head,5);
    push(&head,4);
    printf("The students are seated in order: ");
    reverse(&head);
    printList(head);
    printf("\n After reversing the students are seated in a order: ");
    reverse(&head);
    printList(head);
    reverse(&head);
}
