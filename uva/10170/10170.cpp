#include<iostream>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<utility>
#include<cstdlib>
#include<cstring>
#include<string>
#include<bitset>
#include<vector>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)
using namespace std;
ll day(ll s,ll d)
{
    ll sum=0,i;
    for(i=s;;i++)
    {
        sum=sum+i;
        if(sum>=d)
        {
            break;
        }
    }
    return i;
}
int main()
{
    ll s,d;
    while(sc("%lld %lld",&s,&d)==2)
    {
        pf("%d\n",day(s,d));
    }
    return 0;
}
