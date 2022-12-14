#include<stdio.h>
int gcd(long long int a,long long int b)
{
    if (a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int t,k;
    scanf("%d",&t);
    for (k=0; k<t; k++)
    {
        long long int n,a,b,k;
        scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
        long long int tot=(n/a)+(n/b);
        long long int l=(a*b)/gcd(a,b);
        tot-=2*(n/l);
        if (tot>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
    return 0;
}