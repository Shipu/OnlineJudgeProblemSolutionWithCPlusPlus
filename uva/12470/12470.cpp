/******************************************************************
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_HIDDEN                               ***
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
#define Case(no) printf("Case %d: ",++no)
#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PN(a) printf("%d",a)
#define PLN(a) printf("%lld",a)


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
#define mod 1000000009
////====================================////

struct Matrix
{
	ll mat[5][5];
};

Matrix Mul(Matrix aa, Matrix bb)
{
	Matrix ret;
	cover(ret.mat,0);
	for(int i = 0; i < 3; i ++)
		for(int j = 0; j < 3; j ++)
		{
			for(int k = 0; k < 3; k ++)
			{
				ret.mat[i][j] += (aa.mat[i][k]*bb.mat[k][j]);
				ret.mat[i][j] %= mod;
			}
		}
	return ret;
}

Matrix exp(Matrix a, ll b)
{
	if(b == 1) return a;
	if(b&1)
	{
		return Mul(a, exp(a,b-1));
	}
	else
	{
		Matrix tmp = exp(a,b/2);
		return Mul(tmp,tmp);
	}
}

int main()
{
	ll n;
	Matrix base;
	while(sll(n) && n)
	{
		base.mat[0][0]=0; base.mat[0][1]=0; base.mat[0][2]=1;
		base.mat[1][0]=1; base.mat[1][1]=0; base.mat[1][2]=1;
		base.mat[2][0]=0; base.mat[2][1]=1; base.mat[2][2]=1;

		Matrix res = exp(base, n);
//       for(int i = 0; i < 3; i ++){
//		for(int j = 0; j < 3; j ++)
//		   PLN(res.mat[i][j]),pf(" ");
//		   puts("");
//       }
        PL(res.mat[1][1]);
	}
	return 0;
}
