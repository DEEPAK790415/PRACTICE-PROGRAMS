#include<stdio.h>
int main()
   int size,pos1,pos2;
   printf("enter the size of the array:");
   scanf("%d",&size);
   int arr(size);
   printf("enter %d elements into the array:\n",size);
   for(int i=0;i<size;i++)
   {

       scanf("%d",&arr[i]);
   }
        printf("enter the positions (0-indexed:\n"):
        scanf("%d %d",&pos1,&pos2);
        if(pos1>=0 && pos1< size && pos2>=0 &&pos2<size)
        {

            int temp=arr[pos1];
            arr[pos1]=arr[pos2];
            arr[pos2]=temp;

            printf("updated array after swapping %d and %d:\n",pos1,pos2);
            for(int i=0;i<sizw;i++)
            {

                printf("%d",arr
            }
        }

