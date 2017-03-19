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

string s;
int mem[1005][1005];
int pl(int i,int j)
{
    if(mem[i][j]!=-1) return mem[i][j];
    if(i>j) return 0;
    if(s[i]==s[j])
     return pl(i+1,j-1);
    else
    mem[i][j]=1+ min(pl(i+1,j),min(pl(i,j-1),pl(i+1,j-1)));

    return mem[i][j];
}
int main()
{
    int t,no=0;
    cin>>t;
    while(t--)
    {
        cover(mem,-1);
        cin>>s;
        int l=s.size();
        pf("Case %d: %d\n",++no,pl(0,l-1));
    }
    return 0;
}

