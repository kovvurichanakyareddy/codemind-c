#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200],s2[200];
    scanf("%s",s1);
    scanf("%s",s2);
    int i,j=0,n1=strlen(s1);
    for(i=n1;;i++)
    {
        if(s2[j]==NULL)
        {
            break;
        }
        s1[i]=s2[j];
        j++;
    }
    char t;
    for(i=0;s1[i]!=NULL;i++)
    {
        for(j=i+1;s1[j]!=NULL;j++)
        {
            if(s1[i]>s1[j])
            {
                t=s1[i];
                s1[i]=s1[j];
                s1[j]=t;
            }
        }
    }
    printf("%s",s1);
}