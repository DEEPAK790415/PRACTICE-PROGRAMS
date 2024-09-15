#include<stdio.h>
int main()
{
int n,count=0,sum=0;
scanf("%d",&n);
while(n>0)
{
    int digit=n%10;
    sum=sum+digit;
    n=n/10;
}
for(int i=1;i<=sum;i++)
{
if(sum%i==0)
{
    count++;
}
}
if(count==2)
{
printf("GOOGLY");
}
else
{
printf("NOT GOOGLY");
}
}
