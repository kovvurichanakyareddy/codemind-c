#include<stdio.h>
int main()
{
    int j,d=0,sp=0,v=0,c=0;
    char s[200];
    scanf("%[^
]s",s);
    for(j=0;s[j]!=NULL;j++)
    {
        if(s[j]=='0' || s[j]=='1'|| s[j]=='2'|| s[j]=='3'|| s[j]=='4'|| s[j]=='5'|| s[j]=='6'|| s[j]=='7'|| s[j]=='8'|| s[j]=='9')
        {
            d++;
        }else if(s[j]==' ')
        {
            sp++;
        }else if(s[j]=='a' || s[j]=='e' || s[j]=='i'  || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I'  || s[j]=='O' || s[j]=='U')
        {
            v++;
        }else if(s[j]!='a' && s[j]!='e' && s[j]!='i'  && s[j]!='o' && s[j]!='u' && s[j]!='A' && s[j]!='E' && s[j]!='I'  && s[j]!='O' && s[j]!='U')
        {
            c++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",sp);
}