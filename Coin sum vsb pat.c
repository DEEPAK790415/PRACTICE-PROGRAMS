#include<stdio.h>
int main()
{
int n=10;
int arr[10]={1,2,5,10,20,50,100,1,2,5};
int a=5;
int count=0;

for(int i=0;i<n;i++)
{
    if(arr[i]==a)
    {
        count++;
    }
}
if(count>0)
{
    printf("coin %d is present in the collection %d times",a,count);
}
else
{
    printf("coin %d is not present in the collection",a);
}
return 0;
}
