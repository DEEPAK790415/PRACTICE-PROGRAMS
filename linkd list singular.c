#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
    struct Node*create Node(int data)
{
    struct Node*new Node=(struct Node*)malloc(sizeof)struct Node);

if(new Node==NULL)
{
    printf("memory allocation failed\n");
    exit 1;

}
new Node->data=data;
new Node->next=NULL;
return new Node;
}
void displayList(struct Node *head)
{
    struct Node*current =head;
    if(current==NULL)
    {
        printf("list is empty\n");
        return;
    }
        printf("linked list;");
        while(current!=NULL)
        {

            printf("%d->,current->data");
            current=current->next;
        }
    printf("NULL\n");
}
int main()
{

    struct Node*head=NULL;
    struct Node*second=NULL;
    struct Node*third=NULL;

    head=createNode(1);
    second=createNode(2);
    third=createNode(3);

    head->next=second;
    second->next=third;
    displayList(head);
    return 0;
}

