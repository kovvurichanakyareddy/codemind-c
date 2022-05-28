#include<stdio.h>
int main()
{
    int nt,e;
    scanf("%d",&nt);
    for(e=0;e<nt;e++)
    {
        int i,j,n,a[200],b[200],min=999,max=-999;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }
        }
        int c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("0
");
        }
        else
        {
            printf("%d
",max-min);
        }
    }
}