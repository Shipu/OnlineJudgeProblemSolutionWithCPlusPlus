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
    int n;
    while(sc("%d",&n))
    {
        if(n==0) break;
        char a[110][110],row[110]={0},cal[110]={0};
        int p=-1,q=-1,flag=0,i,j,f=0,cl,ro;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sc("%d",&a[i][j]);
                row[i]+=a[i][j];
                cal[j]+=a[i][j];
            }
        }
        for(int i= 0;i<n;i++)
        {
            if((row[i]%2!=0) || (cal[i]%2!=0))
            {
                f=1;
            }

        }
        if(f==0)
        {
            pf("OK\n");
            continue;
        }
        ro = 0;
        cl = 0;
        for(i=0;i<n;i++)
        {
            if(row[i] %2!=0)
            {
                ro++;
                p=i;
            }
            if(cal[i] % 2!=0)
            {
                cl++;
                q=i;
            }
        }
        if(ro>1||cl>1||ro+cl==1)
            pf("Corrupt\n");
        else if(ro && cl)
            pf("Change bit (%d,%d)\n",p+1,q+1);
        else
            pf("OK\n");

    }

    return 0;
}
