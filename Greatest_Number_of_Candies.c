#include<stdio.h>
int main()
{
    int n,i,j,candie[2000],add[2000],val,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&candie[i]);
    }
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        count=0;
        add[i]=candie[i]+val;
        for(j=0;j<n;j++)
        {
            if(add[i]>=candie[j])
            {
                count++;
            }
        }
        if(count==n)
        {
            printf("True ");
        }else{
            printf("False ");
        }
    }
    return 0;
}