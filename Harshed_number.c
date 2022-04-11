#include<stdio.h>
int main()
{
    int m,n,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }else{
        printf("False");
    }
}