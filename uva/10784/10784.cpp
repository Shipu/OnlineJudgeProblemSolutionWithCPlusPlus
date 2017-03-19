#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#include<iostream>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll n,no=0,s;
    while(sc("%lld",&n)==1&&n>0)
    {
        s=ceil((3+sqrt(9+8*n))/2);
        pf("Case %lld: %lld\n",++no,s);
    }

    return 0;
}
