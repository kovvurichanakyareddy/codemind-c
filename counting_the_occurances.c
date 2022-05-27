#include<stdio.h>
int main()
{
    int n=0,c=0,i;
    char k[10],s[200];
    scanf("%[^
]s",s);
    scanf("%s",k);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==k[0])
        {
            c++;
            n=1;
        }
    }
    if(n!=0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}