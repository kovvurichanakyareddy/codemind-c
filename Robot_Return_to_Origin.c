#include<stdio.h>
int main()
{
    int i,sum=0;
    char s[50];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='U')
        {
            sum++;
        }
        if(s[i]=='D')
        {
            sum--;
        }
        if(s[i]=='R')
        {
            sum++;
        }
        if(s[i]=='L')
        {
            sum--;
        }
    }
    if(sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}