#include<stdio.h>
int main()
{
    int n,even=0,odd=0,m;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        if(m%2==0)
        {
            even++;
        }else{
            odd++;
        }
        n=n/10;
    }
    if(even>0 && odd>0)
    {
        printf("Mixed");
    }else if(even>0 && odd==0)
    {
        printf("Even");
    }else if(odd>0 && even==0)
    {
        printf("Odd");
    }
    return 0;
}