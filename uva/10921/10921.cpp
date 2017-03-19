/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],l;
    int i,j;
    while(scanf("%s",&s)==1)
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
        if((s[i]=='A')||(s[i]=='B')||(s[i]=='C'))
        printf("2");
        else if((s[i]=='D')||(s[i]=='E')||(s[i]=='F'))
        printf("3");
        else if((s[i]=='G')||(s[i]=='H')||(s[i]=='I'))
        printf("4");
        else if((s[i]=='J')||(s[i]=='K')||(s[i]=='L'))
        printf("5");
        else if((s[i]=='M')||(s[i]=='N')||(s[i]=='O'))
        printf("6");
        else if((s[i]=='P')||(s[i]=='Q')||(s[i]=='R')||(s[i]=='S'))
        printf("7");
        else if((s[i]=='T')||(s[i]=='U')||(s[i]=='V'))
        printf("8");
        else if((s[i]=='W')||(s[i]=='X')||(s[i]=='Y')||(s[i]=='Z'))
        printf("9");
        else
        printf("%c",s[i]);
        }
        printf("\n");
        }

return 0;
}
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];

int len,i,j;
while(gets(a))
{
len=strlen(a);
for(i=0;i<len;i++)
    {
        if(a[i]=='A'||(a[i]=='B')||(a[i]=='C'))
           printf("2");
           else if(a[i]=='D'||(a[i]=='E')||(a[i]=='F'))
           printf("3");
           else if(a[i]=='G'||(a[i]=='H')||(a[i]=='I'))
           printf("4");
           else if(a[i]=='J'||(a[i]=='K')||(a[i]=='L'))
           printf("5");
           else if(a[i]=='M'||a[i]=='N'||a[i]=='O')
           printf("6");
           else if(a[i]=='P'||(a[i]=='Q'||(a[i]=='R'||(a[i]=='S'))))
                   printf("7");
                   else if(a[i]=='T'||(a[i]=='U'||(a[i]=='V')))
                           printf("8");
                           else if(a[i]=='W'||(a[i]=='X'||(a[i]=='Y'||(a[i]=='Z'))))
                           printf("9");
                           else
                            printf("%c",a[i]);
                           }




    printf("\n");
}
    return 0;
    }
