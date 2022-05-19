#include<stdio.h>
int main()
{
    int i;
    char str[50];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}