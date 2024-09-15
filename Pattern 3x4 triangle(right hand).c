#include<stdio.h>
int  main()
{
int a,b;
scanf("%d%d",&a,&b);
{
    for(int row=0;row<=a;row++)
    {
        for(int column =1;column<=row-1;column++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
return 0;
}
