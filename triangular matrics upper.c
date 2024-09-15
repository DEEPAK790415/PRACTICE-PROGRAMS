#include<stdio.h>
int main()
{
 int a,b;
 int arr[a][b];
 scanf("%d%d",&a,&b);
 for(int i=0;i<a;i++)
 {
     for(int j=0;j<b;j++)
     {
         scanf("%d",&arr[a][b]);
     }
 }
 for(int i=0;i<a;i++)
 {
     for(int j=0;j<b;j++)
     {
         if(j>=i)
         {
             printf("%d",arr[i][j]);
         }
         else
            printf("0 ");
     }
     return 0;
 }
}
