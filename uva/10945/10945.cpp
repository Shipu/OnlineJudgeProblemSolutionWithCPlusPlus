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
    string s,a;
    while(getline(cin,s))
    {
        a="";
        if(s.compare("DONE")==0)
            break;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(isalpha(s[i]))
            {
                a+=toupper(s[i]);
            }
        }
        int f=1;
        l=a.size();
        for(int i=0;i<(l+1)/2;i++)
        {
            if(a[i]!=a[l-i-1])
            {
                f=0;
                break;
            }
        }
            if(f==0)
            cout<<"Uh oh.."<<endl;
            else
            cout<<"You won't be eaten!"<<endl;
        }
   return 0;
}

