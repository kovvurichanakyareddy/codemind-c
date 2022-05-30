#include<stdio.h>
int main()
{
    int c,n,i,j,arr[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    c=n;
    int t;
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                t++;
            }
        }
        if(t==2 && arr[i]!=0)
        {
            c++;
            arr[i]=0;
        }
    }
    printf("%d",c);
}