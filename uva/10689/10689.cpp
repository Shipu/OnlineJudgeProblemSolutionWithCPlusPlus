/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()

//input
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define sf(t) scanf("%f",&t)
#define sd(t) scanf("%lf",&t)
#define sc(c) scanf("%c",&c)
#define sii(a,b) scanf("%d%d",&a,&b)
#define sll(a,b) scanf("%lld%lld",&a,&b)

//Output
#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PF(a) printf("%f\n",a)
#define PD(a) printf("%lf\n",a)
#define PS(a) printf("%s\n",a)
#define PSN(a) printf("%s ",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define PFN(a) printf("%f ",a)
#define PDN(a) printf("%lf ",a)
#define PP(a,b) printf("%d %d\n",a,b)
#define PPN(a,b) printf("%d %d ",a,b)
#define PPL(a,b) printf("%lld %lld\n",a,b)
#define PPLN(a,b) printf("%lld %lld ",a,b)

#define CP(a) cout<<a<<endl
#define CPN(a) cout<<a<<" "

#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define sz(x) (int)x.size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define sqr(a) ((a)*(a))
#define abs(x) (((x)<0)?-(x):(x))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)      //count one. in long long use __builtin_popcountll(i)
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define btz(a)   __builtin_ctz(a)            //count binary trailling zero
#define un(v) ST(v), (v).erase(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

typedef  long long ll;
typedef  unsigned long long ull;

typedef  vector<int> vi;
typedef  vector<ll> vll;
typedef  vector<string> vs;
typedef  set<int> si;
typedef  set<string> ss;
typedef  map<int,int> mii;
typedef  map<ll,ll> mll;
typedef  map<string,int> msi;
typedef  map<char,int> mci;

template <typename T>string toString( T Number ){stringstream st;st << Number;return st.str();}
template <typename T> T SOD(T n) {__typeof(n) sum=0;for(__typeof(n) i=1;i*i<=n;i++)sum+=(n%i)?0:((i*i==n)?i:i+n/i);return sum;}

//For Define
#define forab(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define for0(i,n) forab(i,0,(n)-1)
#define for1(i,n) forab(i,1,n)
#define rforab(i,b,a) for(__typeof(b) i=(b);i>=(a);i--)
#define rfor0(i,n) rforab(i,(n)-1,0)
#define rfor1(i,n) rforab(i,n,1)
#define forstl(i,s) for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

//File input/output
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

//upper bound and lower bound
#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())

//Test Case & New line
#define Case(no) printf("Case %d: ",++no)
#define nl puts("")

int stringconvert(string s){int p; istringstream st(s); st>>p ; return p;}

ll pow(ll a,ll b, ll m) { ll res = 1; while(b) { if(b & 1) { res = ( (res % m) * (a % m) ) %m ; } a= ((a%m) * (a%m)) %m; b >>= 1; } return res; }
ll modInverse(ll a, ll m){return pow(a,m-2,m);}

////============ CONSTANT ===============////
#define mx7   10000007
#define mx6   1000006
#define mx5   100005
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mx    (100010)
////=====================================////

int mod=1000;
int row;

struct Matrix
{
    ll mat[10][10];
};

Matrix zero;

Matrix Mul(Matrix &aa, Matrix &bb)
{
    Matrix ret=zero;
    for(int i = 0; i < row; i ++)
    {
        for(int j = 0; j < row; j ++)
        {
            for(int k = 0; k < row; k ++)
            {
                ret.mat[i][j] += (aa.mat[i][k]*bb.mat[k][j]);
                ret.mat[i][j] %= mod;
            }
        }
    }
    return ret;
}

Matrix exp(Matrix a, ll b)
{
    Matrix xx=zero;
    for0(i,row)
    {
        xx.mat[i][i]=1;
    }

    while(b)
    {
        if(b&1)
            xx=Mul(xx,a);
        a=Mul(a,a);
        b>>=1;
    }
    return xx;
}

int main()
{
    row=2;
    int t,no=0;
    si(t);
    while(t--)
    {
        int a,b,n,m;
        sii(a,b),sii(n,m);
        mod=1;
        for(int i=0;i<m;i++){
            mod*=10;
        }

        Matrix base,knw;

        base.mat[0][0]=0; base.mat[0][1]=1;
        base.mat[1][0]=1; base.mat[1][1]=1;

        knw.mat[0][0]=a;
        knw.mat[0][1]=b;

        Matrix res =exp(base, n-1);
        res=Mul(knw,res);


        P(res.mat[0][1]);

    }

    return 0;
}
