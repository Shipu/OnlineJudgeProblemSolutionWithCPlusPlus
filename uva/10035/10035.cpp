#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],e[20],d[20];
    int p,c,i,l,s,len,y,k,n,j;
    while(scanf("%s%s",a,b)==2)
    {
        k=(a[0]-'0');
        l=(b[0]-'0');
        if(k==0&&l==0)
        break;
        l=strlen(a);
        len=strlen(b);
        if(l>len)
        {
            y=l;
            n=l-len;
            for(i=0;i<n;i++)
            d[i]='0';
            for(i=i,j=0;j<len;i++,j++)
            d[i]=b[j];
            d[l]='\0';
            strcpy(e,a);
        }

        else if(l<len)
        {
            y=len;
            n=len-l;
            for(i=0;i<n;i++)
            e[i]='0';
            for(i=i,j=0;j<l;i++,j++)
            e[i]=a[j];
            e[len]='\0';
            strcpy(d,b);
        }
        else if(l==len)
        {
           y=l;
           strcpy(e,a);
           strcpy(d,b);
        }

        c=0;
        p=0;
        for(i=y;i>=0;i--)
        {
            s=(e[i]-'0')+(d[i]-'0');
            if(s>=10)
            {
               c++;
               e[i-1]++;
            }
        }
        if(c==0)
        printf("No carry operation.\n");
        else if(c==1)
        printf("1 carry operation.\n");
        else
        printf("%d carry operations.\n",c);
    }
    return 0;
}
