#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum1=0;
    int sum2=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        sum1=sum1+i;
    }
     for(int i=1;i<b;i++)
     {

         if(b%i==0)
        sum2=sum2+i;
     }
     if(sum1==b&&sum2==a)
     {
         printf("Amicable Pair");

     }
     else
     {
        printf("Not Amicable pair");
     }

}
