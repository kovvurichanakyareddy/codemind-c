#include<stdio.h>
int main()
{
    int n,arr[2000],i,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==k)
        {
            printf("%d",i);
            break;
        }
    }
    if(c==0)
    {
        printf("-1 -1");
    }
    return 0;
}