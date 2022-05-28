#include<stdio.h>
int main()
{
    char s[200];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]<97)
        {
            s[i]+=32;
        }
        printf("%c",s[i]);
    }
}