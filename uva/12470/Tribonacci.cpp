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

struct Matrix{
    long long arr[10][10];
};

Matrix MatrixMulti(Matrix a, Matrix b)
{
    Matrix result;
    int i,j,k;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            result.arr[i][j]=0;
            for(k=0;k<3;k++)
                result.arr[i][j]+=(a.arr[i][k]*b.arr[k][j]);
            result.arr[i][j]=result.arr[i][j]%mod;
        }
    return result;
}

Matrix BigMod(Matrix a, long long n)
{
    Matrix ret;
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            {
                if(i==j)
                ret.arr[i][j]=1;
                else
                ret.arr[i][j]=0;
            }

    while(n)
    {
        if(n & 1)
    ret=MatrixMulti(a,a);
        a=MatrixMulti(a,a);
        n>>=1;
    }
    return a;
}

int main()
{
    Matrix mat,ans;
    long long n,m,i,j;
    cover(mat.arr,0);
//    for(i=0;i<3;i++)
//        for(j=0;j<3;j++)
//            mat.arr[i][j]=1;

    mat.arr[1][1]=mat.arr[2][1]=mat.arr[2][2]=mat.arr[0][2]=mat.arr[1][2]=1;
    while(cin>>n && n)
    {

            if(n==1)
            {
                cout<<"0"<<endl;
                continue;
            }
            if(n==2)
            {
                cout<<"1"<<endl;
                continue;
            }
            if(n==3)
            {
                cout<<"2"<<endl;
                continue;
            }


            ans=BigMod(mat,n-3);
            cout<<(ans.arr[0][0]*2+ans.arr[0][1])%mod<<endl;
    }
return 0;
}

