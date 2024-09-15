#include<stdio.h>
#include<stdlib.h>
 struct node
 {
     int data;
     struct node*next;
 };
 void deleteEnd(struct node **head)
 {

     struct node*temp=*head;
     struct node*previous;
     if(*head==NULL)
     {
         printf("linked list empty,nothing to delete");
         return 0;
     }
     if(temp->next==NULL)
     {
         printf("%d delete\n,(head)->data");
         *head=NULL;
         return;
     }
     while((temp->next)!=NULL)
     {
         previous=temp;
         temp=temp->next;
     }
     previous->next =NULL;
     printf("%d delete\n",temp->data);
     free(temp);
 }
 void display(struct node*node)
 {
     while(node!=NULL)
     {
         printf("%d",node->data);
         node=node->next;
     }
     printf("\n\n");
 }
 int main()
 {
     struct node*head=NULL;
     struct node*node2=NULL;
     struct node*node3=NULL;
     struct node*node4=NULL;
     struct node*node5=NULL;
     struct node*node6=NULL;

     head=(struct node*) malloc(sizeof(struct node));
     node2=(struct node*) malloc(sizeof(struct node));
     node3=(struct node*) malloc(sizeof(struct node));
     node4=(struct node*) malloc(sizeof(struct node));
     node4=(struct node*) malloc(sizeof(struct node));
     node5=(struct node*) malloc(sizeof(struct node));
     node6=(struct node*) malloc(sizeof(struct node));

     head->data=2;
     head->next=node2;
     node2->data=4;
     node2->next=node3;
     node3->data=6;
     node3->next=node4;
     node4->data=8;
     node4->next=node5;
     node5->data=10;
     node5->next=node6;
     node6->data=12;
     node6->next=NULL;

     printf("\n linked list:");
     display(head);
     deleteEnd(&head);
     deleteEnd(&head);
     printf("\n linked list:");
     display(head);
     return 0;
 }





































