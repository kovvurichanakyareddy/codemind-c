#include<stdio.h>
int main()
{
    int n,l,w[1000],h[1000],i;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&w[i],&h[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(w[i]<l || h[i]<l)
        {
            printf("UPLOAD ANOTHER
");
        }else if(w[i]==h[i])
        {
            printf("ACCEPTED
");
        }else{
            printf("CROP IT
");
        }
    }
}