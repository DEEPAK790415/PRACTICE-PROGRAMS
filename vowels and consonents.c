#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,vowels=0,consonents=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }
        else
        {
        consonents++;
        }
        i++;
    }
    printf("vowels:%d\n",vowels);
    printf("consonents:%d\n",consonents);
}
