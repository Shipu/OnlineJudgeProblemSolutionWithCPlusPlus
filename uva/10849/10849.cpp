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
    int t,no=0;
    sc("%d",&t);
    while(t--)
    {
        ll m,n;
        sc("%lld",&m);
        sc("%lld",&n);
        while(m--)
        {
            ll r1,c1,r2,c2;
            sc("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
            if ( r1<1||r1>n || r2<1||r2>n || c2<1||c2>n || c1<1||c1>n)
            pf("no move\n");
            else if(r1==r2&&c1==c2)
            pf("0\n");
            else if(abs(r1-r2)==abs(c1-c2))
            pf("1\n");
            else if((r1+r2)%2==(c1+c2)%2)
            pf("2\n");
            else
            pf("no move\n");
        }

    }
    return 0;
}
