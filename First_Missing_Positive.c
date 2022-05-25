#include<stdio.h>
int main()
{
    int n,i,j,max=0,arr[200],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(j=1;j<=max;j++)
    {
        int c=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==j)
            {
                c=1;
            }
        }
        if(c==0)
        {
            printf("%d",j);
            s=1;
            break;
        }
    }
    if(s==0)
    {
        printf("%d",max+1);
    }
}