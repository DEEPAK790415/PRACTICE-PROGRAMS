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
    int main()
    {
        int num=3;
        fun(num);
        printf("%d",fun(num));
    }
}
