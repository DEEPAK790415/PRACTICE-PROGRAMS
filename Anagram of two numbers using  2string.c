#include<stdio.h>
#include<string.h>
int main()
{
int ref[26]={0};
int position1,position2;
char str1[1000];
char str2[1000];
scanf("%s%s",&str1,&str2);
int len1=strlen(str1);
int len2=strlen(str2);
for(int ind=0;ind<len1;ind++)
{
    if((str1[ind]>='a') && (str1[ind]<='z'))
    position1=str1[ind]-97;
    else if((str1[ind]>='A') && (str1[ind]<='Z'))
    position1=str1[ind]-65;


    if((str2[ind]>='a' && str2[ind]<='z'))
    position2=str2[ind]-97;
    else if((str2[ind]>='A') && (str2[ind]<='Z'))
    position2=str2[ind]-65;


    ref[position1]++;
    ref[position2]--;
}
else{
    pritnf("Not Anagram");
}
    int ind;
    for(ind=0;ref[ind]<26;ind++)
    {
        if(ref[ind]!=0)
            break;
    }



    if(ind==26)
    printf("Anagram");
    else
    printf("Not Anagram");
    return 0;
}
C


