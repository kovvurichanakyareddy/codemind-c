#include<stdio.h>
int main()
{
    int c=0,n,arr[2000],i,avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n+1;
    for(i=0;i<n;i++)
    {
        if(arr[i]<avg)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}