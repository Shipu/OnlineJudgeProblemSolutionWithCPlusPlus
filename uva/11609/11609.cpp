/*-----------------------------------------------*/
//Problem Setter: Towhidul Islam Talukdar
//Problem Name  : Teams
//Uva Problem No: 11609
//Type          : Math,Bigmod,Summations.
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*-----------------------------------------------*/
//Hints :http://www.outsbook.com/uva/?page=latest_post&category=-1&id=11609
#include<iostream>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<utility>
#include<cstdlib>
#include<cstring>
#include<string>
#include<bitset>
#include<vector>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)
#define mod 1000000007
using namespace std;
ll bigmod (ll b, ll p)
{
    if (p==0)
    return 1;
    if (p==1)
    return b;
    if (p % 2==0 ) {
        ll r = bigmod(b, p / 2) % mod;
        return (r*r) % mod;
    }
    else
    return (bigmod (b, p - 1) % mod) * (b % mod);
}
int main()
{
    int t,no=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pf("Case #%d: ",++no);
        cout<<((n%mod)*bigmod(2,n-1)%mod)%mod<<endl;
    }

    return 0;
}
