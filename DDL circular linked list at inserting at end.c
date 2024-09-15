
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* create(int data)
{
    struct node* newnode;
    newnode=(struct node*)calloc(1,sizeof(struct node));
    newnode->data=data;

    newnode->next=newnode;
    newnode->prev=newnode;
    return newnode;
};
    struct node* end(struct node* head,int data)
    {
    struct node* newnode;
    newnode=create(data);
    if(head==NULL)
        head=newnode;
    else
    {
        struct node* temp=head->prev;
        temp->next=newnode;
        newnode->prev=temp;
         newnode->next=head;
        head->prev=newnode;
        return head;
    }
    return head;
};
void display(struct node* head)
{
    struct node* temp=head;
    do
    {
        printf("%d-> ",temp->data);
       temp=temp->next;
    }
       while(temp!=head);
}
int main()
{
    struct node* head=NULL;
    head=end(head,5);
    head=end(head,10);
    head=end(head,4);
    head=end(head,32);
    display(head);
}
