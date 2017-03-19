#include<stdio.h>
int main()
{
long long int n,i,s[100000],f[100000];
while(scanf("%lld",&n)==1 && n>=0)
{
f[0]=0;
f[1]=1;
s[0]=1;
for(i=2;i<=n+1;i++)
    f[i]=f[i-1]+f[i-2];
for(i=1;i<=n;i++)
    s[i]=s[i-1]+f[i+1];
printf("%lld %lld\n",s[n]-f[i],s[n]);
}
return 0;
}
