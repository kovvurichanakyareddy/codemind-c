#include<stdio.h>
int main()
{
    int n,i,temp,sum=0,fact=1,m;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        m=n%10;
        fact=1;
        for(i=m;i>=1;i--)
        {
            fact=fact*i;
        }
        sum+=fact;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }else{
        printf("The number %d is not a strong number",temp);
    }
}