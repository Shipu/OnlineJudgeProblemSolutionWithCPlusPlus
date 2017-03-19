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

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)

#define ff first
#define se second
#define inf (1<<30)                                              //infinity value
#define pb push_back
#define S(s) s.size()
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;
string pal,a;
int c=0;
int pl(string s,int len)
{
     for(int i=0,j=len-1;i<len/2;i++,j--)
     {
         if(s[i]!=s[j])
            return 0;
     }
     return 1;
}
int main()
{
    string s;
    while(cin>>s)
    {
        int len=s.size();
        int l;
        int r=0,c=0;
        map<string,int>mp;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                pal=s.substr(i,len-j);
                if(mp[pal]>=1)
                continue;
                mp[pal]++;

                l=pal.size();
                if(pl(pal,l))
                c++;
            }
        }
        cout<<"The string '"<<s<<"' contains "<<c<<" palindromes."<<endl;
        c=0;
        mp.clear();
    }

}
