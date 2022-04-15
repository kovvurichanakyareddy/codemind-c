#include<stdio.h>
int main()
{
    int n,i,arr[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        printf("%d ",arr[i]);
        }
    }
    return 0;
}