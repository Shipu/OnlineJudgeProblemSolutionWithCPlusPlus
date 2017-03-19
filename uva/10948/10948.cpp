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
void sieve()
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
    sieve();
    int n;
    while(sc("%d",&n)==1)
    {
        if(n==0) break;
        int a,i;
        int f=0;
        for(i=2;i<=n;i++)
        {
            if(prime[i])
            {
                a=n-i;
                if(prime[a]){
                 f=1;
                 break;
                }
            }
        }
        if(f==0||a==0)
        {
            pf("%d:\nNO WAY!\n",n);
        }
        else
        pf("%d:\n%d+%d\n",n,i,a);

    }
    return 0;
}

