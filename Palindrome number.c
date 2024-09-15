#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int dig;
    int res=0;
    int ori_num=num;
    while(num>0)
    {
        dig=num%10;
        res=res*10+dig;
        num=num/10;
    }
    if(ori_num==res)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
