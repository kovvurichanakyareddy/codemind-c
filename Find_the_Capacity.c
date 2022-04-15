#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    printf("%dKB",(2*s*t*b*512)/1024);
}