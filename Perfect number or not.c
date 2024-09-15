#include<stdio.h>
int main()
{
    int a;
    int b=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
     {
         if(a%i==0)
         {
             b=b+i;
         }
         if(b=0)
         {
         printf("Perfect");
         }
         else
         {
             printf("Not a Perfect");
         }

     }
     return 0;

}
