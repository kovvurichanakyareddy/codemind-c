#include<stdio.h>
int main()
{
    int n,m,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=(sum*10)+m;
        n/=10;
    }
    printf("%d",sum);
}