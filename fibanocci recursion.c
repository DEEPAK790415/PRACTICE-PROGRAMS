#include<stdio.h>
int fun(int num,int a,int b)
{


for(int i=1;i<=num;i++)
{

    int temp=a+b;
    a=b;
    b=temp;
    return temp;
}
int main()
{
    int n;
    sum("%d",&n);
    int a=0;
    int b=1;
    fun(n,a,b);
    printf("%d",fun(n,a,b));
}
}
