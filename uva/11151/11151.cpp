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
#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define cover(a,b) memset(a,b,sizeof(a))
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;

string s;
int mem[2000][2000];
int pl(int i,int j)
{
    if(mem[i][j]!=-1) return mem[i][j];
    if(i>j) return 0;
    if(s[i]==s[j])
     return mem[i][j]=pl(i+1,j-1);
    else
    mem[i][j]=1+ min(pl(i,j-1),pl(i+1,j));

    return mem[i][j];
}
int main()
{
    int t,no=0;
    cin>>t;
    getchar();
    while(t--)
    {
        cover(mem,-1);
        getline(cin,s);
        if(s.compare("")==0){
         pf("0\n");
        continue;
        }
        int l=s.size();
        int n=pl(0,l-1);
        pf("%d\n",abs(n-l));
    }
    return 0;
}
