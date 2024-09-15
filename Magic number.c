#include<stdio.h>
int main()
{
int num,dig,sum=0;
scanf("%d",&num);
int temp1=num;
while(num)
{
dig=num%10;
sum=sum+dig;
num=num/10;
}
int temp2=sum;
int dig2;
int rev;

    while(sum)

    {
        dig2=sum%10;
        rev=rev*10+dig2;
        sum=sum/10;
    }
    int mul=temp2*rev;
    {
        if(mul==temp1)
{


            printf("magic number");
}
        else
{
            printf("Not magic number");

    }
    }
}

