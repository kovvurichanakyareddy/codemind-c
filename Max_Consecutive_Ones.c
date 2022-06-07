#include<stdio.h>
int main()
{
    int n,arr[500],i,c=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            c++;
        }
        else
        {
            if(c>t)
            {
                t=c;
                
            }
            c=0;
        }
    }
    if(c>t)
    {
        t=c;
    }
    printf("%d",t);
}