#include<stdio.h>
int main()
{
    int n,arr[2000],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    if(n==count)
    {
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}