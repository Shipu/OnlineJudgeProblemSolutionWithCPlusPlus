#include<stdio.h>
#include<math.h>
int main()
{
    long long  n,t,i,r;
    int p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        r=0;
        p=int(sqrt(n))+1;
        for(i=1;i<p;i++)
        {
            r+=n/i;
        }
        p--;
        r = 2*r - p*p;
        printf("%lld\n",r);
    }
    return 0;

}
