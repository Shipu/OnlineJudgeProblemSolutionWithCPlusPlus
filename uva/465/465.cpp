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
    double a,b;
    char c[10],s[1100];
    while(gets(s))
    {
        sscanf(s,"%lf%s%lf",&a,c,&b);
            puts(s);
        if(a>2147483647)
        pf("first number too big\n");
        if(b>2147483647)
        pf("second number too big\n");
        if(c[0]=='+')
         a=a+b;
        else
        a=a*b;

        if(a>2147483647)
         pf("result too big\n");
        // pf("%c",c[0]);

    }

    return 0;
}

