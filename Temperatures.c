#include<stdio.h>
int main()
{
    int n,i,j,arr[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int c=0;
        for(j=i;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                c=1;
                break;
            }
        }
        if(j-i==0 or c==0){
        printf("0 ");
        }
    else{
        printf("%d ",j-i);
    }
    }
    printf("0");
}