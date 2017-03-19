#include<stdio.h>
int main()
{
long long int n;
while(scanf("%lld",&n)==1 && n>=0)
{
if(n==1)
printf("0%%\n");
else
printf("%lld%%\n",n*100/4);
}
return 0;
}
