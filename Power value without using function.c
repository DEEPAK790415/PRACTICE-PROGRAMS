#include<stdio.h>
int main()
{
    int a,b;
    int c=1;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
        for(int i=1;i<=b;i++)
        {
            c=c*a;
        }
    printf("%d",c);
}
