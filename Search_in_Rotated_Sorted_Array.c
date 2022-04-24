#include<stdio.h>
int main()
{
    int n,arr[2000],i,sum=0,se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            sum++;
            printf("%d",i);
            break;
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
   return 0; 
}