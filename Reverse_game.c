#include<stdio.h>
int main()
{
    int n,arr[2000],i,sum=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        while(arr[i]>0)
        {
            r=arr[i]%10;
            sum=(sum*10)+r;
            arr[i]/=10;
        }
        arr[i]=sum;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}