#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char s[200];
        scanf("%s",s);
        int c=0,j;
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[j]!='1'&&s[j]!='2'&&s[j]!='3'&&s[j]!='4'&&s[j]!='5'&&s[j]!='6'&&s[j]!='7'&&s[j]!='8'&&s[j]!='9'&&s[j]!='0')
            {
                c=1;
            }
        }
        if(c==0)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}