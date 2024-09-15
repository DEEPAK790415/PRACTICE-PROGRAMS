void peek(struct stack *s)
{
if(s->top==-1)
printf("stack is empty || underflow");
else
printf("top most element :%d",s->array[s->top]);
}
void display(struct stack *s)
{
if(s->top==-1)
{
printf("Stack is empty || underflow");
else
printf("\n Display stck elements:");
for(int i=s->top;i!=-1;i--)
printf("%d",s->array[i]);
}
}
