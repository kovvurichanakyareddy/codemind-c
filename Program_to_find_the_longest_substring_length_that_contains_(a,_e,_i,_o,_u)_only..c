#include<stdio.h>
int main()
{
    char s[200];
    int i,c=0,t=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>t)
            {
                t=c;
                c=0;
            }
        }
    }
    printf("%d",t);
}