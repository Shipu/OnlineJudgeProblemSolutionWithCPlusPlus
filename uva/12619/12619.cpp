/******************************************************************
***   Problewm      :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)
#define ull unsigned long long
#define all(v) v.begin(),v.end()

#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define ssll(a,b) scanf("%lld%lld",&a,&b)
#define Case(no) printf("Case %d:",++no)
#define nl puts("")
#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)


#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                       //count one
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

////============ CONSTANT ===============////
#define mx  (1000000)
#define inf (1<<30)                                            //infinity value
#define eps 1e-9
#define mod 1000000007
////=====================================////

bool v[mx+10];
ll pd[mx+10];
ll fact[mx+10];
ll ans;
void sieve(){
        for (ll i = 2; i <=mx; i+= 2)
            pd[i] = 2;

        for (ll i = 3; i <=mx; i += 2){
                if (!v[i]){
                    pd[i] = i;
                    for (ll j=i; (j*i) <=mx; j += 2)
                    {
                        v[j*i] = true;
                        pd[j*i] = i;
                    }
                }
        }
}

ll pow(ll a, ll b,ll Mod)
{
    if(b==1) return a;
    ll x=pow(a,b/2,Mod);
    x=(x*x)%Mod;
    if(b%2==1) x=(x*a)%Mod;
        return x;
}
ll modInverse(ll a, ll m) {
    return pow(a,m-2,m);
}

ll multi(ll n)
{

        while (n != 1)
        {
            ll cnt = 0;
            ll s = pd[n];
            while ((n%s) == 0)
            n /= s, cnt++;
            ll p=modInverse((fact[s]+1),mod);
            ans=(ans*p)%mod;
            fact[s]+=cnt;
            ans=(ans*(fact[s]+1))%mod;
         }
        return ans;
}

ll division(ll n)
{
        while (n != 1)
        {
            ll cnt = 0;
            ll s = pd[n];
            while ((n%s) == 0)
            n /= s, cnt++;
            ll p=modInverse((fact[s]+1),mod);
            ans=(ans*p)%mod;
            fact[s]-=cnt;
            ans=(ans*(fact[s]+1))%mod;
         }
        return ans;
}
int main()
{
    sieve();
    int t,no=0;
    sii(t);
    while(t--)
    {
        cover(fact,0);
        ll sum=0;
        ll d;
        sll(d);
        ans=1;
        while(d--)
        {
            ll n;
            sll(n);
            if(n<0)
            {
                n=(n*(-1));
                sum=(sum+division(n))%mod;
            }
            else
            {
                sum=(sum+multi(n))%mod;
            }
        }
        pf("Case %d: %lld\n",++no,sum);
    }
    return 0;
}
