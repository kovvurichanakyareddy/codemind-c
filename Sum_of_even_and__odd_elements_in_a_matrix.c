#include<stdio.h>
int main()
{
    int i,j,a,b,mat[1000][1000],e=0,o=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2==0)
            {
                e+=mat[i][j];
            }
            else
            {
                o+=mat[i][j];
            }
        }
    }
    printf("%d %d",e,o);
}