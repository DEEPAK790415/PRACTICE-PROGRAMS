#include<stdio.h>
#include<stdlib.h>
// creating structure:
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
//Creating new node
struct Node* create(int data)
{
    struct Node* newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
};
//Inserting at ending
struct Node* end(struct Node* head,int data)
{
    struct Node* newnode;
    newnode =create(data);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else
    {
    struct Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
    }

};
//Insert at begin
struct Node* begin(struct Node* head,int data)
{
    struct Node* newnode;
    newnode=create(data);
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    return head;
};
//Insert at mid
struct Node* mid(struct Node* head,int data,int pos)
{
    struct Node* newnode;
    newnode=create(data);
    struct Node* temp=head;
    for(int i=1;i<pos &&temp->next!=NULL;i++)
    {
        temp=temp->next;
    }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        temp=newnode->next;
        temp->prev=newnode;
        return head;

};
// Display
void display(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

};
//Deleting node at beginning
struct Node* deletebeg(struct Node* head)
{
    struct Node* temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    free(temp);
    return head;
};
//Delete at end
struct Node* deleteend(struct Node* head)
{
    struct Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    return head;

};

//Deleting mid
struct Node* deletemid(struct Node* head,int pos)
{
    struct Node* temp=head;
    for(int i=1;i<pos && temp->next!=NULL;i++)
    {
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    return head;
};
//Main Function
int main()
{
    struct Node* head=NULL;
    head=end(head,5);
    head=end(head,10);
    head=begin(head,15);
    //head=mid(head,20);
    //head=deletebeg(head);
   // head=deleteend(head);
   head=deletemid(head,2);
    display(head);
}
