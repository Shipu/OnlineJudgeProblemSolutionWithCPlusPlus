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

bool prime[10010];
void sieve()
{
   // prime[1]=false;
        int n=sqrt(10010);
        for(int i=2;i<=n;i++)
        {
            if(prime[i]==true)
            {
                for(int j=2*i;j<=10010;j=j+i)
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
    int n,c;
    while(sc("%d%d",&n,&c)==2)
    {
        int j=0,save_prime[1010];
        for(int i=1;i<=n;i++)
        {
            if(prime[i])
             save_prime[++j]=i;
        }
        //pf("%d\n",save_prime[1]);
        int a,b;
         if(j%2==1)
         {
            if(j>2*c-1)
            {
                a=(j-2*c+1)/2+1;
                b=a+2*c-1;
            }
            else
            {
                a=1;
                b=j+1;
            }
         }
        else
        {
            if(j>2*c)
            {
                a=(j-2*c)/2+1;
                b=a+2*c;
            }
            else
            {
                a=1;
                b=j+1;
            }
        }
        cout<<n<<" "<<c<<":";
        for(int i=a;i<b;i++)
            cout<<" "<<save_prime[i];
        cout<<endl<<endl;
    }

    return 0;
}
