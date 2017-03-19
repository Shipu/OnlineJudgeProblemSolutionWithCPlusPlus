#include<stdio.h>
#include<string.h>
long long Mod = 100000007;
int main()
{
       long long coin[6]={1,5,10,25,50},way[7510]={0},i,j,a;
        way[0]=1;
        for(i=0;i<5;i++)
        {
          for(j=coin[i];j<=7500;j++)
          {
                way[j]+=way[j-coin[i]];
                if(way[j]>=Mod)
                way[j]%=Mod;
          }
        }
        while(scanf("%lld",&a)==1)
        {
           printf("%lld\n",way[a]);
        }
    return 0;
}

