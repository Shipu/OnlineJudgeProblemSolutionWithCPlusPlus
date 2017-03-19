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
//    input;
//    output;
    long long lwr,upp,t,j,i,divisor,Max,num;
    cin>>t;
    while(t--)
    {
     sc("%lld %lld",&lwr,&upp);
     Max=0;
     if(lwr==1&&upp==0)
     {
          printf("Between 1 and 1, 0 has a maximum of 2 divisors.\n");
          continue;
     }
     for(i=lwr;i<=upp;i++)
     {
         divisor=0;
         int p=sqrt(i);
       for(j=1;j<=p;j++){
         if(i%j==0){
            divisor++;
         if(i/j!=j){
         divisor++;
         }
       }
//       printf("%lld has a maximum of %lld divisors.\n",i,divisor);
       if(Max<divisor){
        Max=divisor;
        num=i;
       }
     }
     }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",lwr,upp,num,Max);
    }
    return 0;
}
