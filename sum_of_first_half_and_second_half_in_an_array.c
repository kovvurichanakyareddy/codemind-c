#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,i,sum1=0,sum2=0;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum1+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum2+=arr[i];
    }
    printf("%d
%d",sum1,sum2);
    return 0;
}