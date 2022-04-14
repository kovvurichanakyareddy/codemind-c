#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0,count=0,m;
    scanf("%d",&n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&arr[i]);
    while(arr[i]>0)
    {
        m=arr[i]%10;
        sum=sum+1;
        arr[i]=arr[i]/10;
    }
    if(sum%2==0)
    {
        count+=1;
    }
    }
    printf("%d",count);
}