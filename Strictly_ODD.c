#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,odd=0,count=0,i;
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {

        if(arr[i]%2!=0)
        {
            odd=odd+1;
        }
        }
    }
    if(odd==count)
    {
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}