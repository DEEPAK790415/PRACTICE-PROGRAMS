#include<stdio.h>
int main()
{
int n,sum,sum2=0;
scanf("%d",&n);
int a=0,b=1;
for(int i=0;i<n;i++)
{
sum=a+b;
a=b;
b=sum;
}
printf("%d",sum);
}
