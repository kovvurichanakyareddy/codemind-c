#include<stdio.h>
int main()
{
    int i,j,a,b,mat[1000][1000],s,t=-1000;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        s=0;
        for(j=0;j<a;j++)
        {
            s+=mat[j][i];
        }
        if(s>t)
        {
            t=s;
        }
    }
    printf("%d",t);
}