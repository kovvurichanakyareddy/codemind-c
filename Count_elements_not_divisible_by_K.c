#include<stdio.h>
int main()
{
    int n,arr[500],i,k,count=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%k!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}