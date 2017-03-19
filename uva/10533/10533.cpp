/******************************************************************
***   Problewm      : Digit Primes                              ***
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
#define CP(a) cout<<a<<endl;
#define CPN(a) cout<<a;


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
#define mx  (1000010)
#define Max 1000000                                           //infinity value
#define eps 1e-9
#define mod 10007
////=====================================////
bool prime[mx];
int digitprime[mx],p[mx],k,res[mx];
void sieve()
{
    k=0;
    for(int i=2;i<mx;i++)
    {
        if(!prime[i])
        {
            p[k++]=i;
            for(int j=2*i;j<mx;j+=i)
            {
                prime[j]=true;
            }
        }
    }
}
int sd(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void dprime()
{
    int j=0;
    for(int i=0;i<k;i++)
    {
        if(!prime[sd(p[i])])
         digitprime[j++]=p[i];
    }
    digitprime[j]=0;
}
void cal()
{
    res[0]=0;
    int j=0;
    for(int i=1;i<mx;i++)
    {
        if(i==digitprime[j])
            j++,res[i]=res[i-1]+1;
        else
            res[i]=res[i-1];
    }
}


int main()
{
    sieve();
    dprime();
    cal();
    int t;
    sii(t);
    while(t--)
    {
        int a,b;
        ssii(a,b);
        P(res[b]-res[a-1]);
    }
    return 0;
}
