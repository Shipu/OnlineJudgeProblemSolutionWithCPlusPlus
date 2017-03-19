#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
long long i,c,d,num,j,p,n;
while(scanf("%lld",&num)==1)
{
p=num;
i=2;
while(i<=num)
{
if(num%i==0)
break;
i++;
}

n=0;
while(num!=0)
{
n=n*10+num%10;
num/=10;
}


j=2;
while(j<=n)
{
if(n%j==0)
break;
j++;
}
if(p==2)
printf("%lld is prime.\n",p);
else if((j==n)&&(i==p))
printf("%lld is erime.\n",p);
else if(i==p)
printf("%lld is prime.\n",p);
else
printf("%lld is not prime.\n",p);


}
return 0;
}

