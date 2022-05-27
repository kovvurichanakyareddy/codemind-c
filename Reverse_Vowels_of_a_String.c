#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s2[100];
    int i,j=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            s2[j]=s[i];
            j++;
        }
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            s2[j]=s[i];
            j++;
        }
    }
    int n=strlen(s2)-1;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            printf("%c",s2[n]);
            n--;
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            printf("%c",s2[n]);
            n--;
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}