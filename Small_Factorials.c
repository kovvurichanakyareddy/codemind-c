#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int *pro;
    int n,i,j;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    pro=(int *)malloc(n*sizeof(int));
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        pro[i]=1;
        for(j=1;j<=arr[i];j++)
        {
            pro[i]*=j;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d
",pro[i]);
    }
    return 0;
}