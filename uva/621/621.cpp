#include<stdio.h>
#include<string.h>
int main()
{
    int n,l;
    char s[10000];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%s",&s);
            l=strlen(s);
            if (strcmp(s,"1")==0||strcmp(s,"4")==0||strcmp(s,"78")==0)
            printf("+\n");
            else if (s[l-2]=='3'&&s[l-1]=='5')
            printf("-\n");
            else if (s[0]=='9'&&s[l-1]=='4')
            printf("*\n");
            else if (s[0]=='1'&&s[1]=='9'&&s[2]=='0')
            printf("?\n");


        }
    }
    return 0;
}
