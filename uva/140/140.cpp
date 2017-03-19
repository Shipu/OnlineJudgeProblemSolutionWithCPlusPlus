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

int main()
{
    coff;

    //input;
    //output;

    string s;
    while(cin>>s)
    {
        if(s[0]=='#') break;
        int len=sz(s);

        int f=1,u,v,g[30][30],visit[30];
        string ord="";

        cover(g,0);
        cover(visit,0);
        for(int i=0;i<len;i++)
        {

            if(f){
                u = s[i]-'A';
                f=0;
            }

            if(s[i]==':')
                continue;
            else if(s[i]==';'){
                f = 1;
            }
            else
            {
                if(!visit[s[i]-'A'])
                {
                    ord+=s[i];
                    visit[s[i]-'A']=1;
                }

                if(f==0)
                {
                    v = s[i]-'A';
                    g[u][v]=1;
                    g[v][u]=1;
                }
            }
        }

        sort(ord.begin(),ord.end());
        int n=sz(ord);

        //cout<<ord<<endl;

        int res=inf,sek=0,cnt=0,rsek=0;
        string result="";
        do
        {
            int pos[30]={0};
            for(int i=0;i<n;i++)
            {
                pos[ord[i]-'A']=i;
            }
            rsek=sek=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<30;j++)
                {
                    if(g[ord[i]-'A'][j])
                    {
                        sek=max(sek,abs(pos[ord[i]-'A']-pos[j]));
                    }
                }
                rsek=max(sek,rsek);
            }
            if(res>rsek)
            {
                res=rsek;
                result=ord;
            }
        }
        while(next_permutation(ord.begin(),ord.end()));

        for(int i=0;i<n;i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<"-> "<<res<<endl;
    }


    return 0;
}


