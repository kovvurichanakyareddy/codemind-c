#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,i,sum1=0,sum2=0,ans;
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            sum1+=arr[i];
        }else{
            sum2+=arr[i];
        }
    }
    ans=sum1-sum2;
    if(ans<0)
    {
        ans=ans*(-1);
    }
    if(ans%4==0)
    {
        printf("X");
    }else{
        printf("Y");
    }
    return 0;
    
}