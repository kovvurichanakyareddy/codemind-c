#include<stdio.h>
int main()
{
    int nt,e;
    scanf("%d",&nt);
    for(e=0;e<nt;e++)
    {
        int n,arr[200],i,j,k,c;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(i!=j && j!=k)
                    if(arr[j]+arr[k]==arr[i])
                    {
                        c++;
                    }
                }
            }
        }
        if(c==0)
        {
            printf("-1
");
        }else{
            printf("%d
",c/2);
        }
    }
}