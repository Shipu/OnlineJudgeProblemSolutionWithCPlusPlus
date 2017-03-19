#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j,l,p,c;
    while(gets(s))
    {
    l=strlen(s);
    p=0;
    c=0;
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
        for(j=i-1;j>=p;j--)
        printf("%c",s[j]);
        if(c==0)
        {
            printf(" ");
            c=1;
        }
        p=i;
        }

    }
    for(i=l-1;i>p;i--)
    printf("%c",s[i]);
    printf("\n");
    }
return 0;
}
