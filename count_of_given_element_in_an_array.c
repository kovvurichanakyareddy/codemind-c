#include<stdio.h>
int main()
{
    int ser,i,flag=0,n,arr[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ser);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ser)
        {
            flag++;
        }
    }
    printf("%d",flag);
    return 0;
}