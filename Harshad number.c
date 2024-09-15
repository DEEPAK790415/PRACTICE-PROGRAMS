#include<stdio.h>
int main()
{
    int n;
    int dig;
    int sum=0;
    int temp=n;
    scanf("%d",&n);
    while(n)
    {
        dig=n%10;
        sum=sum+dig;
        n=n/10;

    }
    if(temp%sum==0)
    {
        printf("Harshad number");
    }
    else
    {
        printf("Not Harshad number");
    }
    return 0;
}
