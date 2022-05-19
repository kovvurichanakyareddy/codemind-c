#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        int i,l,t=0;
        char s[100],s1[100];
        scanf("%s",s);
        l=strlen(s);
        for(i=l-1;i>=0;i--)
        {
            s1[t]=s[i];
            t+=1;
        }
        s1[t]=NULL;
        int k;
        k=strcmp(s,s1);
        if(k==0)
        {
            printf("YES ");
            if(l%2==0)
            {
                printf("EVEN
");
            }
            else{
                printf("ODD
");
            }
        }
        else{
            printf("NO
");
        }
    }
}