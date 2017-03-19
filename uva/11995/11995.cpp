#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<list>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<sstream>
#include<fstream>
#include<utility>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<deque>
#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)
#define x first
#define y second
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) SORT(v), (v).earse(unique(v.begin(),v.end()),v.end())
#define mymem(a,d) memset(a,d,sizeof(a))
using namespace std;
int main()
{
     int i,j,k,l,n,cmd,p,temp;
   while(sc("%d",&n) == 1)
  {
        stack<int>st;
        queue<int>q;
        priority_queue<int>pq;
        int s=1;
        int qu=1;
        int pri=1;
        while(n--)
        {
            sc("%d %d",&cmd,&p);

            if(cmd==1) {
                if(s)
                st.push(p);
                if(qu)
                q.push(p);
                if(pri)
                 pq.push(p);
            }
            else if(cmd==2) {
                if(s) {
                    if(!st.empty() && st.top() == p) {
                        st.pop();
                    }
                    else
                    s=0;
                }
                if(qu) {
                    if(!q.empty() && q.front() == p) {
                        q.pop();
                    }
                    else
                    qu=0;
                }
                if(pri) {
                    if(!pq.empty() && pq.top() == p) {
                        pq.pop();
                    }
                    else
                    pri= false;
                }
            }
        }

        if(s && !pri && !qu)
            printf("stack\n");
        else if(!s && !pri && qu)
            printf("queue\n");
        else if(!s && pri && !qu)
            printf("priority queue\n");
        else if(pri==1 || qu==1 || s==1)
            printf("not sure\n");
        else
            printf("impossible\n");

  }


    return 0;
}
