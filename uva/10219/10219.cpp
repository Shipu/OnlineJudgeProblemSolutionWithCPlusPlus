#include <stdio.h>
#include <math.h>
int main()
{
    long long n, r,i;
    long double res;
    while(scanf("%lld %lld",&n,&r)==2)
    {
        res = 0;
        for(i=n;i>n-r;i--)
            res+=log10(i);
        for(i=1;i<=r;i++)
            res-=log10(i);
        printf("%d\n",(int)floor(res)+1);
    }
    return 0;
}
