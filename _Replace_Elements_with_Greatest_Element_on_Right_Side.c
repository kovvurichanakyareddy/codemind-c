#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("-1");
            break;
        }
        max=arr[i+1];
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        printf("%d ",max);
    }
}