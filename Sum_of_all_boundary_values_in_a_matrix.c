#include<stdio.h>
int main()
{
    int m,n,arr[300][300],i,j;
    scanf("%d%d",&m,&n);
    int c=0;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
          scanf("%d",&arr[i][j]);
          if(i==0 || i==m-1 || j==0 || j==n-1)
          {
              c+=arr[i][j];
          }
      }
    }
    printf("%d",c);
}