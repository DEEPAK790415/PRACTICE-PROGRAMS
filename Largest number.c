#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3)
    {
        printf("%d" ,num1 is greater);
    }
    else if(num2>=num1 && num2>=num3)
    {
        printf("%d" , num2 is greater);
    }
    else
    {
        printf("%d" ,num3 is greater);
    }
    return 0;
}
