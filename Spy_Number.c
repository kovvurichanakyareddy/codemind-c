#include<stdio.h>
int main()
{
    int m,n,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        pro=pro*m;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}