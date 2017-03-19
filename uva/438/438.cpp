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
    double x1,y1,x2,y2,x3,y3,s,a,b,c,r,L;
    while(sc("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {

        a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        s=(a+b+c)/2;
        L=(sqrt(s*(s-a)*(s-b)*(s-c)));
        r=(a*b*c)/(4*L);
        pf("%.2lf\n",2*pi*r);

    }
    return 0;
}
