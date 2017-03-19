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

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)

#define ff first
#define se second
#define inf (1<<30)                                              //infinity value
#define pb push_back
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;

ll gcd(ll a, ll b)
{
	if (b==0) return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
	return a/gcd(a, b)*b;
}

bool cmp(ll a,ll b)
{
    return a > b;
}
int main()
{
    string a="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string ares="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
    string b="~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string bres="~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    string s;
    while(getline(cin,s))
    {
        int l=s.size();
        int l1=a.size();
        int l2=b.size();
        int j=0;
        while(l!=0)
        {
            if(s[j]==' ')
            {
                pf("%c",s[j++]);
                l--;
            }
            for(int i=0;i<l1;i++)
            {
                if(s[j]==a[i])
                {
                    pf("%c",ares[i]);
                    l--;
                    j++;
                }
            }
            for(int i=0;i<l1;i++)
            {
                if(s[j]==b[i])
                {
                   pf("%c",bres[i]);
                   l--;
                   j++;
                }
            }

        }
        pf("\n");

    }
   return 0;
}

