#include<stdio.h>
int main()
{
    int n,a[200],b[200],i,l=1,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<l;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            b[l]=a[i];
            l++;
        }
    }
    for(i=0;i<l;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c++;
            }
        }
        if(c%2==0)
        {
            p+=c/2;
        }
        else
        {
            if(c>2)
            {
                c-=1;
                p+=c/2;
            }
        }
    }
    printf("%d",p);
}