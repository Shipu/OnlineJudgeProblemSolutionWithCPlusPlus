#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,n,p,s,l;
    while(scanf("%d",&p)==1)
    {
        if(p==0) break;
        scanf(" ");
        gets(a);
        l=strlen(a);
        n=l/p;
        s=0;j=0;
        while(j<l)
        {
            s=s+n;
            for(i=s-1;i>=j;i--)
            printf("%c",a[i]);
            j=j+n;
        }
        printf("\n");
    }
    return 0;
}
