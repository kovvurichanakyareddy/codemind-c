#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k;
    int *arr1;
    int *arr2;
    int *arr3;
    scanf("%d",&n);
    arr1=(int *)malloc(n*sizeof(int));
    arr2=(int *)malloc(n*sizeof(int));
    arr3=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
       arr3[i]=arr1[i]+arr2[i]; 
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}