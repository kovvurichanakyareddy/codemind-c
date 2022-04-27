#include<stdio.h>
int add(int n)
{
    int r,sum=0,c=0;
    while(n>0)
    {
        r=n%10;
        c++;
        sum+=r;
        n/=10;
    }
    if(c==1)
    {
        return sum;
    }else{
        n=sum;
        add(n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",add(n));
    return 0;
}