#include<stdio.h>
int main()
{
    int i,j,a,b,mat[1000][1000],s=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
            s+=mat[i][j];
        }
    }
    printf("%d",s);
}