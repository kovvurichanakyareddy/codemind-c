#include<stdio.h>
int main()
{
    int i,n,arr[2000],temp,sum,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        temp=arr[i];
        while(arr[i]>0)
        {
            m=arr[i]%10;
            sum=(sum*10)+m;
            arr[i]/=10;
        }
        if(sum==temp)
        {
            printf("True
");
        }else{
            printf("False
");
        }
    }
    return 0;
}