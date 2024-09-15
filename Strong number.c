#include<stdio.h>
int main()
{
    int a;
    int dig;
    scanf("%d",&a);
    int temp=a;
    int fact=1;
    int sum=0;
    while(a)
    {
        dig=a%10;
        for(int i=1;i<=dig;i++)
        {

            fact=fact*i;
        }
        sum=sum+fact;
        a=a/10;
    }
    if(temp=sum)
    {

        printf("Strong number");
    }
    else{
        printf("Not a Strong number");
    }
    return 0;
}
