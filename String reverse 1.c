#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int len=0,i,j;
    int count=0;
    for(int len=0;str[len]!='\0';len++)
    {
        count++;
    }
   for(int i=0,j=count-1;i<j;i++,j--)
   {
            char temp;
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
printf("%s",str);
}
