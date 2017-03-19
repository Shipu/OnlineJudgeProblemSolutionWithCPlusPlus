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
#define st(s) s.size();
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

bool prime[10000010];
void is_prime()
{
    prime[1]=false;
        int n=sqrt(10000000);
        for(int i=2;i<=n;i++)
        {
            if(prime[i]!=false)
            {
                for(int j=2*i;j<=10000000;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
}
int main()
{

    cover(prime,true);
    is_prime();
    string s;
    while(getline(cin,s))
    {
        if(s.compare("0")==0)
            break;

        int l=st(s);
        ll p;
        ll Max=0;
        for(int i=0;i<l;i++)
        {
            for(int j=l;j>=i;j--)
            {
                istringstream buf(s.substr(i,j)); //string to integer;
                buf >> p;
                if(p > 100000)
                 continue;
                if(prime[p])
                {
                    if(Max < p)
                    Max=p;
                }
            }
        }
        cout<<Max<<endl;

    }

    return 0;
}

