#include<stdio.h>
int main()
{
    int n,i;
    int arr1[100],arr2[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr1[i],&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",arr1[i]+arr2[i]);
    }
    return 0;
}