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
    int a,b;
    cin>>a>>b;
        map<string,int>mp;
        map<string,int>mp1;
        string s;

        while(a--)
        {
            int value;
            cin>>s;
            cin>>value;
            mp[s]=value;
            mp1[s]++;
        }
        while(b--)
        {
            int result=0;
            while(cin>>s && s.compare(".")!=0)
            {
                mp1[s]++;
                if(mp1[s]>1)
                {
                    result+=mp[s];
                }
            }
            cout<<result<<endl;

        }
    return 0;
}
