#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    for(int k=0;k<w;k++)
    {
        int n,a[100],tot,sum=0;
        scanf("%d",&n);
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
        }
        tot=n*(n+1)/2;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+a[i];
        }
        printf("%d
",tot-sum);
    }
}