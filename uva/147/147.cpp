#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main ()
{
    int coin [] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
    long way [30010];
    memset (way,0,sizeof(way));
    way[0]=1;
    for (int i=0;i<11;i++)
    {
        for (int j=coin[i];j<=30010;j++)
                way [j]+=way[j-coin[i]];
    }
    long a,b;
    while (sc("%ld.%ld",&a,&b))
    {
        long n=a*100+b;
        if (n==0)
        break;
        pf("%3ld.%.2ld%17ld\n",a,b,way[n]);

    }

    return 0;
}
