#include<stdio.h>
int main()
{
    int n,arr[2000],i,r,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            r=arr[i]%10;
            sum+=r;
            arr[i]/=10;
        }
    }
    printf("%d",sum);
    return 0;
}