#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
int i,l,sum,n,p,j;
char c[100];
while(gets(c))
    {
    sum=0;
    l=strlen(c);
    for(i=0;i<l;i++)
        {
        if(c[i]>='a'&&c[i]<='z')
        {
        n=toascii(c[i])-96;
        sum=sum+n;
        }
        else
        {
        n=toascii(c[i])-38;
        sum=sum+n;
        }
    }
    //printf("%d",sum);
        p=1;
        for(j=2; j<=sqrt(sum); j++)
        {
            if(sum%j==0)
            {
                p=0;
                break;
            }
        }
        if(p==1 || sum==1)
            printf("It is a prime word.\n");

        else if(p==0)
            printf("It is not a prime word.\n");
    }
    return 0;
}

