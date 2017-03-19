#include<stdio.h>
int gcd( int a, int b)
{
if(a%b==0)
return b;
else
return gcd(b,a%b);
}
int main()
{
    int i,n,s,j;
    while(scanf("%d",&n)==1)
    {
      if(n==0)
      break;
      else
      {
      s=0;
      i=1;
      for(i=1;i<n;i++)
      for(j=i+1;j<=n;j++)
      {
        s+=gcd(i,j);
      }
        printf("%d\n",s);
      }
    }
    return 0;
}
