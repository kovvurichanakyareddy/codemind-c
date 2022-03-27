#include<stdio.h>
int main()
{
    int fact=0,tot=0,n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                fact++;
            }
        }
        if(fact==9)
        {
            tot=tot+1;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",tot);
    return 0;
}