
#include<stdio.h>
int main()
{

int num,res=0;
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
if(i%2==0)
{
    res=res+i;
}
printf("%d",res);
return 0;
}
}
