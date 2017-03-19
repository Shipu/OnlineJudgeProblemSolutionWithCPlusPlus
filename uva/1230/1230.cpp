#include<stdio.h>
int main()
{
    long long t,x,y,m,r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&x,&y,&m);
        r=1;
        while(y)
        {
        if(y%2!=0)
        r=(r*x)%m;
        x=(x*x)%m;
        y/=2;
        }
        printf("%lld\n",r);
    }
    return 0;
}

