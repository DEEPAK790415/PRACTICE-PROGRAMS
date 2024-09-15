#include<stdio.h>
#include<string.h>
int main()
/*
{
    char str[100];
    int len,count=0;
    scanf("%[^\n]s",str);
    for(int len=0;str[len]!='\0';len++)
    {

        count++;
    }
    printf("%d",count);
    return 0;
}*/
{


char str[100]="abc";
char str1[100]="def";
int  Strcat(str,str1);
printf("%s",Strcat(str,str1));
return 0;
}

