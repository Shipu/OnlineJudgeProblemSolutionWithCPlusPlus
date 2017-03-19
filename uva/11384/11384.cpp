#include <stdio.h>
int main()
{
long long int n,i;
while(scanf("%lld",&n)==1)
{
i=0;
while(n>=1)
{
n/=2;
i++;
}
printf("%lld\n",i);
}
return 0;
}
