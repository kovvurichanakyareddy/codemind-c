#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,even=0,count=0,evin=0,i;
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {

        if(arr[i]%2==0)
        {
            even=even+1;
        }
        }
    }
    if(even==count)
    {
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
