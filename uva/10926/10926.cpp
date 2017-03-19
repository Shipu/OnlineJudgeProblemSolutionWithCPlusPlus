/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <bitset>
#include <list>
#include <iomanip>
#include <climits>
#include <sstream>
#include <fstream>
#include <cctype>
#include <assert.h>
#include <numeric>
#include <functional>
#include <memory.h>
#include <utility>
#include <ctime>
using namespace std;

#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()
#define coff ios_base::sync_with_stdio(0);

#define ff first
#define se second
#define pb push_back
#define sz(a) ((int)a.size())
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)      //count one. in long long use __builtin_popcountll(i)
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define btz(a)   __builtin_ctz(a)            //count binary trailling zero
#define un(v) ST(v), (v).erase(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

typedef  long long ll;
typedef  unsigned long long ull;

template <typename T>string toString( T Number ){stringstream st;st << Number;return st.str();}
int stringconvert(string s){int p; istringstream st(s); st>>p ; return p;}

//upper bound and lower bound
#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())

//Debug
#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define nl puts("")

//File input/output
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

ll bigmod(ll a,ll b, ll m) { ll res = 1; while(b) { if(b & 1) { res = ( (res % m) * (a % m) ) %m ; } a= ((a%m) * (a%m)) %m; b >>= 1; } return res; }
ll modInverse(ll a, ll m){return bigmod(a,m-2,m);}

////============ CONSTANT ===============////
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mx    100010
#define mod   1000000007
////=====================================////

int cnt,col[110];
vector<int>g[110];

int dfs(int n)
{
    col[n]=1;
    int len=sz(g[n]);
    for(int i=0;i<len;i++)
    {
        int u = g[n][i];
        if(!col[u])
        {
            cnt++;
            dfs(u);
        }
    }
    return cnt;
}

int main()
{
    coff;
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;

        int t;
        for(int i=1;i<=n;i++)
        {
            cin>>t;
            int p;
            for(int j=0;j<t;j++)
            {
                cin>>p;
                g[i].pb(p);
            }
        }

        int res=0,get,resi;
        //nl;
        for(int i=1;i<=n;i++)
        {
            cnt=0;
            cover(col,0);
            get=dfs(i);
            if(get>res)
            {
                resi=i;
                res=get;
             //   cout<<res<< " "<<resi<<endl;
            }
        }
        cout<<resi<<endl;
        for(int i=1;i<=n;i++)
        {
            g[i].clear();
        }
    }

    return 0;
}

