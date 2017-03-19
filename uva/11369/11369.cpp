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
long long big(int a,int b )
{
return a>b;
}
int main()
{
    ll a[50000],t,n;
    sc("%lld",&t);
    while(t--)
    {
        sc("%lld",&n);
        for(int i=0;i<n;i++)
        sc("%lld",&a[i]);
        sort(a,a+n,big);
        long long s=0;
        for(int i=2;i<n;i=i+3)
        s+=a[i];
        pf("%lld\n",s);
    }
    return 0;
}
