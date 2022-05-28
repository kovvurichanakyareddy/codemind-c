#include<stdio.h>
#include<string.h>
int main()
{
    char s[300];
    scanf("%[^
]s",s);
    int len=strlen(s);
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            int t=i+1;
            while(s[t]!=' ' && s[t]!=NULL)
            {
                printf("%c",s[t]);
                t++;
            }
            printf(" ");
        }
    }
    for(int i=0;s[i]!=NULL&&s[i]!=' ';i++)
    {
        printf("%c",s[i]);
    }
}