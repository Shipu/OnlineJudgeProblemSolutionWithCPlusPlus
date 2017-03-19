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
int main()
{
    ll n;
    while(sc("%lld",&n)==1)
    {
        ll a=2;
        ll b=1;
        ll sum=0;
        if(n==0)
        break;
        else if(n==1){
        pf("1\n");
        continue;
        }
        else if(n==2){
        pf("2\n");
        continue;
        }

        while(n>=3)
        {
            sum=a+b;
            b=a;
            a=sum;
            n--;
        }
        pf("%lld\n",sum);
    }
    return 0;
}
