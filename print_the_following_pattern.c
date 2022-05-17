#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    t=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || j==t)
            {
                printf("x");
            }
            else{
                printf("0");
            }
        }
        t--;
        puts("");
    }
}