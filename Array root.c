#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int k;
    printf("Rotation of the array : ");
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int rot=1;rot<k;rot++)
    {
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    }
for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}

