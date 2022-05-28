#include<stdio.h>
int main()
{
    int i,sum=0;
    char s[200];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            sum+=s[i]-'0';
        }
    }
    printf("%d",sum);
}