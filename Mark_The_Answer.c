#include<stdio.h>
int main()
{
    int n,k,arr[200],c=0,s=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s==1 && arr[i]>k)
        {
            break;
        }
        if(arr[i]>k)
            s=1;
        else
            c++;
    }
    printf("%d",c);
}