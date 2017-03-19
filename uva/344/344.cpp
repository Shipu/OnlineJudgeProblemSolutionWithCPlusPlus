/******************************************************************
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_HIDDEN                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)
#define ull unsigned long long
#define all(v) v.begin(),v.end()

#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define ssll(a,b) scanf("%lld%lld",&a,&b)
#define Case(no) printf("Case %d: ",++no)
#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PN(a) printf("%d",a)
#define PLN(a) printf("%lld",a)


#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                       //count one
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

////============ CONSTANT ===============////
#define mx  (1000000)
#define inf (1<<30)                                            //infinity value
#define eps 1e-9
#define mod 1000000007
////====================================////
int main()
{
    string rom[] = {"i","v","x","l","c"};
    char s;
    string mat;
    int n;
    while(sii(n))
    {
        if(n==0) break;
        int p=0;
        int f=0;
        mat="";
        map<string,int>mp;
        int a,he;
        for(int i=1,j=0;i<=n;i++,j++)
        {
            a=i;
            if(a>=90){
              mp[rom[4]]++;
               if(a>=90 && a<100)
                    mp[rom[2]]++;
               if(a==99)
                mp[rom[2]]++;
            }
            if(a>=40 && a<90){

                mp[rom[3]]++;
                if(a>=40 && a<=49){
                    mp[rom[2]]++;
                }

                if(a==49)
                    mp[rom[2]]++;
                if(a>=60)
                {
                    he=a-50;
                    mp[rom[2]]+=he/10;
                }

            }
            if(a>=59 && a<99)
            {
                if(a%10==9) mp[rom[2]]++;
            }
            if(a>=9 && a<40){
                    if(a%10==9) mp[rom[2]]++;
                    mp[rom[2]]+=a/10;
            }

            if(a%10==1 || a%10==6 || a%10==9 || a%10==4)
                mp[rom[0]]++;
            if(a%10==2 || a%10==7)
                mp[rom[0]]+=2;
            if(a%10==3 || a%10==8)
                mp[rom[0]]+=3;
            if(a%10==4||a%10==5 || a%10==6 || a%10==7 || a%10==8)
                mp[rom[1]]++;

        }
        pf("%d: %d i, %d v, %d x, %d l, %d c\n",n,mp[rom[0]],mp[rom[1]],mp[rom[2]],mp[rom[3]],mp[rom[4]]);

    }

    return 0;
}


