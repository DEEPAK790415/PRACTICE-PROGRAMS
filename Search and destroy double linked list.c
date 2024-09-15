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
//search and destroy
struct Node* searchAndDestroy(struct NOde* head)
{
    struct Node *t1,*t2,*abc;
    int g=1;
    for(head=1;t1!=NULL;t1=t1->next)
    {
        for(t2=t1;t2!=NULL;)
        {
        abc=t2;
        t2=t2->next;
        if(t1->data==t2->data)
        {
            abc->next=t2->next;
            free(t2);
            return head;
        }
        }
    }
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

//Main Function
int main()
{
    struct Node* head=NULL;
    head=begin(head,25);
   head=begin(head,5);
   head=begin(head,16);

   head=searchAndDestroy(head);
    display(head);
}
