#include<stdio.h>
int main()
{
    int n,arr[200],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[n]=arr[0];
    arr[n+1]=arr[1];
    for(i=1;i<=n;i++)
    {
        if(arr[i-1]%2==0 && arr[i+1]%2!=0)
        {
            c++;
        }
        if(arr[i-1]%2!=0 && arr[i+1]%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}