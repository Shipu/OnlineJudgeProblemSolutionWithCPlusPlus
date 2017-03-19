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
  char s[1005];
  while(sc("%s",s))
  {
      int l=strlen(s);
      if(strcmp(s,"0")==0)
      break;
      int sum=0;
      for(int i=0;i<l;i++)
      sum+=s[i]-'0';
      //pf("%d\n",sum);
      if(sum%9!=0)
      pf("%s is not a multiple of 9.\n",s);
      else
      {
           int  d=sum,c=1;

           //pf("%d\n",d);
           while(d>9)
           {
               sum=0;
               c++;
               while(d>0)
               {
                sum+=(d%10);
                d/=10;
               }
               //pf("%d\n",sum);
               d=sum;
           }
           pf("%s is a multiple of 9 and has 9-degree %d.\n",s,c);
      }
  }
return 0;
}
