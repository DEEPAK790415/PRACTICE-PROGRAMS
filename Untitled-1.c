#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNodes(int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL);
    {
        printf("Memory allocation faild\n");
        exit(1);

    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void displayList(struct Node* head)
{
    struct Node* current=head;
    if(current==NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while(current!=NULL)
    {
        printf("%d ->",current->data);
        current=current->next;
    }
    printf("NULL\n");

}
int main()
{
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;

    //create Nodes
    head=createNodes(1);
    second=createNodes(2);
    third=createNodes(3);

    //link Nodes
    head -> next=second;
    second -> next=third;
    displayList(head);
    return 0;
}