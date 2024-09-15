#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
struct Node *prev;
};
struct Node* create (int value)
{
    struct Node* n=(struct Node*)calloc(1,sizeof(struct Node));
   // data=0,next=NULL,prev=NULL;
    n->data=value;
    return n;
};
struct Node* insert(struct Node* head,int value)
{
    struct Node* newnode=create(value);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else{
        struct Node *temp=head;

        newnode->next=head;
        head->prev=newnode;
        newnode->prev=temp;
        temp->next=newnode;
        return head;
    }
    void display(struct Node* head)
    {
    struct Node* temp=head;
    do
        {
            printf("%d ->",temp->data);
            temp=(temp->next);
        }
        while(temp!=head);


}        int main()
        {

            struct Node* head=NULL;
            head=insert(head,7);
            head=insert(head,6);
            head=insert(head,9);
            head=insert(head,8);
            display(head);
        }
}



