#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c,min,max;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        {
            min=c;
        }
        else
        {
            max=c;
            break;
        }
    }
    if(max-n<n-min)
    {
        printf("%d",max);
    }
    else if(max-n==n-min)
    {
        printf("%d %d",min,max);
    }
    else
    {
        printf("%d",min);
    }
}