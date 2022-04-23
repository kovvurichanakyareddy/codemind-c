#include<stdio.h>
int main()
{
    int n,arr[2000],i,j,sum=0,sqr;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sqr=0;
        for(j=1;j<=arr[i];j++)
        {
            if(j*j==arr[i])
            {
                sqr++;
            }
        }
        if(sqr>0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
    
}