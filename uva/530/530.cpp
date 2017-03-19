#include<stdio.h>

long long nCr(long long n,long long m)
{
long long res=1,i;
if(n-m<m)
m=n-m;
for(i=1;i<=m;i++,n--){
r=r*n;
r=r/i;
}
return r;
}

int main(){
long long n,r;
while(scanf("%lld%lld",&n,&r)==2)
{
    if(n==0&&r==0)
    break;
   printf("%lld\n",nCr(n,r));
}


return 0;
}

