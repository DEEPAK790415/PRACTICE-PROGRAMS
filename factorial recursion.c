#include<stdio.h>
int fun(int num)
{

    if(num==1)
    {

        return 1;
    }
    else
    {
        return num*fun(num-1);
    }
}
    int main()
    {
        int n;
        scanf("%d",&n);
        fun(n);
        printf("%d",fun(n));
    }

