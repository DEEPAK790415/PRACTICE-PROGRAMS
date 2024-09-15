#include<stdio.h>
int main()
{


    int count =0;
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;
    }
    while(n!=0);
    {

        printf("%d",count);
    }
    return 0;
}
