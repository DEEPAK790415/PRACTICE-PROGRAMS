#include<stdio.h>
int  main()
{
int a,b;
scanf("%d%d",&a,&b);
{
    for(int row=1;row<=a;row++)
    {
        for(int column =a;column>=row;column--)
        {
            printf(" *");
        }
        printf("\n");
    }
}
return 0;
}

