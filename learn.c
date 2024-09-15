#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int temp;
int a=0,b=1;
for(int i=1;i<n;i++)
{
    temp=a+b;
    a=b;
    b=temp;

printf("%d ",temp);
}
}
