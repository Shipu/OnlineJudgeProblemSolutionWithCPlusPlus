#include<stdio.h>
#include<string.h>
char a[2000010];
int main()
{
    int n,i,d,min,f;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        scanf("%s",a);
        f=0;
        d=1;
        min=2000010;
        for(i=0;i<n;i++)
        {

        if(f==1)
        break;

        else if(a[i]=='Z')
        {
          min=0;
          f=1;
          break;
        }
        else if(a[i]=='R')
        {
            i++;
            for(i=i;i<n;i++)
            {
            if(a[i]=='.')
            {
                d++;
            }

            else if(a[i]=='R')
            {
                i--;
                d=1;
                break;
            }
            else if(a[i]=='D')
            {
                if(min>d)
                min=d;
                i--;
                d=1;
                break;

            }
            else if(a[i]=='Z')
            {
              min=0;
              f=1;
              break;
            }

            }
        }
        else if(a[i]=='D')
        {
            i++;
            for(i=i;i<n;i++)
            {

            if(a[i]=='.')
            {
               d++;
            }
            else if(a[i]=='D')
            {
                i--;
                d=1;
                break;
            }
            else if(a[i]=='R')
            {
                if(min>d)
                min=d;
                i--;
                d=1;
                break;
            }
            else if(a[i]=='Z')
            {
              min=0;
              f=1;
              break;
            }

            }

        }
        else
        continue;
    }
    printf("%d\n",min);
    }
    return 0;
}
