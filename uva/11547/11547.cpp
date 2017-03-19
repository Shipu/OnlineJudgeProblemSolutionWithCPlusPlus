#include <stdio.h>
int main()
{
long long t,n,a;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
a=((((((n*567)/9)+7492)*235)/47)-498);
if(a<0)
a*=-1;
a=(a/10)%10;
printf("%lld\n",a);
}
return 0;
}
