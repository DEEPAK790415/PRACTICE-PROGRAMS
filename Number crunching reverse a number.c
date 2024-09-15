#include<stdio.h>
int main()
{
    int a;
    int dig;
    scanf("%d",&a);
    while(a)
    {
        dig=a%10;
        a=a/10;
        printf("%d",dig);

    }
    return 0;
}
