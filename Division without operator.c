#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter the two numbers");
    scanf("%d%d",&num1,&num2);
        for(int i=1;num2<=num1;i++)
        {
            num1=num1-num2;
        }
    printf("%d",i-1);
}

