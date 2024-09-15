#include<stdio.h>
int main()
{

int num;
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
if(i%2!=0)
{
    num=num+i;
}
printf("%d",num);
return 0;
}
}
