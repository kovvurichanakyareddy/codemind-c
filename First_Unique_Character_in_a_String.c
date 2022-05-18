#include<stdio.h>
int main()
{
    int i,j,s=0,c=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        s=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                s++;
            }
        }
        if(s==1)
        {
            c++;
            printf("%d",i);
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}