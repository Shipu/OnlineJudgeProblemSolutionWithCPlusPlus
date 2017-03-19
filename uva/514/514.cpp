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
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;
int main()
{
    input;
    output;

    int t,s,b[100000];
    while(sc("%d",&t)==1)
    {
        if(t==0)
        break;
        vector<int>v;
        int f=0;
        while(1)
        {
            for(int i=0;i<t;i++)
            {
                sc("%d",&b[i]);
                if(b[i]==0)
                {
                    f=1;
                    break;
                }
            }
            for(int i=1;i<=t;i++)
            {
               v.push_back(i);
            }
            if(f==1)
            {
                f=0;
                pf("\n");
               break;
            }
            stack<int>st;
            int c=0;
            s=v.size();
            for(int i=0;i<t;i++)
            {
                for(int j=0;j<s;j++)
                {
                    if(b[i]==v[j])
                    {
                        v[j]=-1;
                        c++;
                        break;
                    }
                    else if(b[i]!=v[j])
                    {
                      if(st.size()==0 ||st.top()!=b[i])
                      {
                        if(v[j]!=-1){
                        st.push(v[j]);
                        v[j]= -1;
                        c++;
                        }
                      }
                      else if(st.top()==b[i])
                      {
                          st.pop();
                          break;
                      }
                    }
                    else
                    c++;
                }
                if(c>t)
                break;
            }
            v.clear();
             if(!st.empty()){
               pf("No\n");
                }
            else
            pf("Yes\n");
        }
    }
    return 0;
}
