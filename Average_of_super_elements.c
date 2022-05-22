#include<stdio.h>
int main()
{
    int i,j,n,arr[200],co=0;
    float s=0,c=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        co=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                co++;
            }
        }
        if(arr[i]==co)
        {
            s+=arr[i];
            c++;
            arr[i]=0;
        }
    }
    if(c==0)
    {
        printf("-1");
    }else{
        avg=s/c;
        printf("%.2f",avg);
    }
}