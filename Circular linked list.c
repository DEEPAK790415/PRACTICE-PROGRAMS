#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

    struct node
    {
        int data;
        struct node*next;
    };
    struct node*addtoEmpty(int data)
    {
        struct node*temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->next=temp;
            return temp;
    };
    struct node*addatEND (struct node*tail,int data)
    {
        struct node*newp=malloc(sizeof(struct node));
        newp->data=data;
        newp->next=NULL;
        newp->next=tail->next;
        tail=tail->next;
        return tail;
    }
    struct node*createList(struct node*tail)
    {
    int i,data,n;
    printf("Enter the number of nodes of the linked list: ");
    scanf("%d",&n);
    if(n==0)
        return tail;
    printf("Enter the element 1: ");
    scanf("%d",&data);
    tail=addEmpty(data);
    for(i-0;i<n;i++)
    {

        printf("Enter the element %d:");
        tail=addatEnd(tail,data);
    }
    return tail;
    }
    void print(struct node*tail)
    {

        if(tail==NULL)
            printf("No node is the list");
        else
        {
            struct node*p=tail->next;
            do{
                printf("%d",p->data);
                p=p->next;
            }
            while(p!=tail->next);
        }
        printf("\n");
    }
    int main()
    {

        struct node*tail=NULL;
        tail=createList(tail);
        printf("tail");
        return 0;
    }

