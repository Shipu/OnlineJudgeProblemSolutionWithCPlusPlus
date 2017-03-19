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
#define sort(v) sort(v.begin(),v.end())
#define un(v) sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))

using namespace std;

int main()
{
    double k,res;
    int t,no=0;
    sc("%d",&t);
    while(t--)
    {
        scanf("%lf",&k);
        if(k<=180000)
        {
            printf("Case %d: 0\n",++no);
            continue;
        }
        if(k<=480000)
        res=((k-180000)*0.1);
        else if(k<=880000)
        res=30000+((k-480000)*0.15);
        else if(k<=1180000)
        res=90000+((k-880000)*0.20);
        else
        res=150000+((k-1180000)*0.25);
        res=ceil(res);
        if(res<2000)
        printf("Case %d: 2000\n",++no);
        else
        printf("Case %d: %.lf\n",++no,res);
    }
    return 0;
}
