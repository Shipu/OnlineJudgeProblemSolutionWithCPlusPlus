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
int main()
{
    set<string>res;
    string s;
    while(cin>>s)
    {
        string p="";
        int l=s.size();
        for(int i=0;i<=l;i++){
           if(isalpha(s[i])){
            p+=tolower(s[i]);
           }
           else if(p!=""){
           res.insert(p);
           p="";
           }
        }
    }
    for (std::set<string>::iterator it=res.begin(); it!=res.end();it++)
    cout<<*it<<endl;

    return 0;
}
