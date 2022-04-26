#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,count=0,i,j,o;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            if(count>1)
        {
            o=arr[i];
            break;
        }
    }
    }
    printf("%d",o);
    return 0;
}