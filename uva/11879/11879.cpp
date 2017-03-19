#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum,r,l;
    char s[1020];
    while(gets(s))
    {
        r=0;
        l=strlen(s);
        if(l==1 && s[0]=='0')
        break;
        for(i=0;i<l;i++)
        {
        sum=r*10+(s[i]-'0');
        r=sum%17;
        }
        if(r==0)
        printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}
