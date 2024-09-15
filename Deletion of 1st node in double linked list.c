#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};

///CREATE :::

struct node*Create(int value)
{
    struct node*newnode;
    newnode=(struct Node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
};
///INSERT:::

struct node*insert(struct node*head,int data)
{
if(head==NULL)
    head=newnode;
else{
    struct node*temp==head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}
}


///DELETION :::

deleteB(struct node*head)
if(head==NULL)
{
return NULL;
}
if(head->next==NULL)
    free(head);
return NULL;
else
{
    struct node*temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}

///FUNCTION:::

int main()

{
    struct node*head=NULL;
    deleteB(head);
    display(head);
    return head;
}
}
