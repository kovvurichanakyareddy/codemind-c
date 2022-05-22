#include<stdio.h>
int main()
{
    int i,sum=0;
    char s[200];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4')
        {
            sum++;
        }
        if(s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8')
        {
            sum++;
        }
        if(s[i]=='9' || s[i]=='0')
        {
            sum++;
        }
    }
    if(sum>0)
    {
        printf("Contains %d digit",sum);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}