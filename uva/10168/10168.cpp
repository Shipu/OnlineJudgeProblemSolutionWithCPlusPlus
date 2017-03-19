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
#define mx  (10000010)
#define Max 1000000                                           //infinity value
#define eps 1e-9
#define mod 10007
////=====================================////

bool prime[mx];
int p[mx],k=1;
void sieve()
{
    prime[1]=false;
    p[0]=2;oi
    for(int i=2;i<=mx;i+=2)
        prime[i]=true;
        int n=sqrt(mx);
        for(int i=3;i<=n;i=i+2)
        {
            if(!prime[i])
            {
                p[k++]=i
                for(int j=2*i;j<=mx;j+=i)
                {
                    prime[j]=true;
                }
            }
        }
}
void fourprime(int n)
{
      int a,i,f=0;
      for(i=0;i<k;i++)
      {
        if(prime[i]==0 && prime[n-i]==0)
        {
             PN(i),P(n-i);
             break;
        }
     }
}
int main()
{
    sieve();
    int n;
    while(sii(n)==1)
    {
        if(n<8)
            puts("Impossible.");
        else if(n==8)
            puts("2 2 2 2");
        else
        {
            if(n&1)
            {
                PN(2),PN(3);
                n-=5;
                fourprime(n);
            }
            else
            {
                PN(2),PN(2);
                n-=4;
                fourprime(n);
            }

        }

    }
    return 0;
}


