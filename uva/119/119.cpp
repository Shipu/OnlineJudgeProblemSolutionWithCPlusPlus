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
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;
int main()
{

    string name;
    int n,f=0;
    while(cin>>n)
    {
        map<string,int>mp;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            cin>>name;
            mp[name]=0;
            v.pb(name);
        }
        int amt,man;
        for(int i=0;i<n;i++)
        {
            cin>>name;
            cin>>amt>>man;
            if(amt==0 && man==0||man==0) continue;

            mp[name]+=(amt%man)-amt;
            amt=amt/man;
            for(int j=0;j<man;j++)
            {
                cin>>name;
                mp[name]=mp[name]+amt;
            }
        }
        if(f)
        cout<<endl;
        f=1;
        for(int i=0;i<n;i++)
        cout<<v[i]<<" "<<mp[v[i]]<<endl;

    }
    return 0;
}
