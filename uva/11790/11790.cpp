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
#define Case(no) printf("Case %d. ",++no)
#define nl puts("")
#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define CP(a) cout<<a<<endl;
#define CPN(a) cout<<a<<" ";


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
#define popcount(i) __builtin_popcount(i)                         //count one
#define parity(i) __builtin_parity(i)       //evenparity 0 and odd parity 1
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

////============ CONSTANT ===============////
#define mx  (10010)
#define inf 1<<30                                           //infinity value
#define eps 1e-9
#define mod 10007
////=====================================////
struct house
{
   int  h[mx],w[mx];
};

int lis(house a,int n)
{
        int dp[mx];
        for(int i=0;i<n;i++)
        {
            dp[i]=a.w[i];
            for(int j=0;j<i;j++)
            {
                if(a.h[j]<a.h[i])
                    dp[i]=max(dp[i],a.w[i]+dp[j]);
            }
        }

        return *max_element(dp,dp+n);
}

int  main()
{
   int n,t,no=0;
   sii(t);
    while(t--)
    {
        sii(n);
        house skyline;
        for(int i=0;i<n;i++)
        {
            sii(skyline.h[i]);
        }
        for(int i=0;i<n;i++)
        {
            sii(skyline.w[i]);
        }
        int m1=lis(skyline,n);
        reverse(skyline.h,skyline.h+n);
        reverse(skyline.w,skyline.w+n);
        int m2=lis(skyline,n);
        if(m1>=m2)
        {
            Case(no);
            cout<<"Increasing ("<<m1<<"). "<<"Decreasing ("<<m2<<")."<<endl;
        }
        else
        {
            Case(no);
            cout<<"Decreasing ("<<m2<<"). "<<"Increasing ("<<m1<<")."<<endl;
        }
    }

   return 0;

}
