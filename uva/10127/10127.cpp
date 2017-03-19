#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    long long n,s,k;
    int i;
    while(scanf("%lld",&n)==1)
    {

        if(n==0)
        {
          printf("0\n");
          continue;
        }

        s=0;
        for(i=1,k=1;;i++)
        {
            s=k%n;
            if(s==0)
            {
            printf("%d\n",i);
            break;
            }
            k=s*10+1;
        }
    }
    return 0;
}
