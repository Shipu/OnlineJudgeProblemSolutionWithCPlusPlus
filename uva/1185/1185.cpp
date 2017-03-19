#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long n,i,t;
    int d;
    while(scanf("%lld",&t)==1)
    {
        while(t--)
        {
        scanf("%lld",&n);
        d=0;
        for(i=1;i<=n;i++){
        d=d+log10(i);
        }
        printf("%d\n",d);
        }
    }



return 0;
}
