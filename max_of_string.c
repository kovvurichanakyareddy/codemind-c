#include<stdio.h>
int main()
{
    char s[200];
    scanf("%[^
]s",s);
    int i;
    char t='A';
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>t)
        {
            t=s[i];
        }
    }
    printf("%c",t);
}