/*************************************
******** Team : BUBT_HIDDEN **********
**************************************
*********** Shipu Ahamed *************
*************************************/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)

#define ft first
#define se second
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))

using namespace std;

ll happy(ll n)
{
    ll s=0;
    //n=n*n;
    if(n<=9)
        return n;
    while(n!=0)
    {

        s+=((n%10)*(n%10));
        n/=10;
    }
    happy(s);
}



int main()
{
    int t,no=0;
    sc("%d",&t);
    while(t--)
    {
        ll n;
        sc("%lld",&n);
        if(n==7)
        {
            pf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else if(happy(n)==1)
        {
            pf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else
        {
             pf("Case #%d: %lld is an Unhappy number.\n",++no,n);
        }

    }
    return 0;
}
