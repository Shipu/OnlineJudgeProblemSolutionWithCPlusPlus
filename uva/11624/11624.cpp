/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <bitset>
#include <list>
#include <iomanip>
#include <climits>
#include <sstream>
#include <fstream>
#include <cctype>
#include <assert.h>
#include <numeric>
#include <functional>
#include <memory.h>
#include <utility>
#include <ctime>
using namespace std;

#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()
#define coff ios_base::sync_with_stdio(0);

#define ff first
#define se second
#define pb push_back
#define sz(a) ((int)a.size())
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)      //count one. in long long use __builtin_popcountll(i)
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define btz(a)   __builtin_ctz(a)            //count binary trailling zero
#define un(v) ST(v), (v).erase(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

typedef  long long ll;
typedef  unsigned long long ull;

template <typename T>string toString( T Number ){stringstream st;st << Number;return st.str();}
int stringconvert(string s){int p; istringstream st(s); st>>p ; return p;}

//upper bound and lower bound
#define LB(a,value) (lower_bound(all(a),value)-a.begin())
#define UB(a,value) (upper_bound(all(a),value)-a.begin())

//Debug
#define dbg(x) cout<<#x<<'='<<x<<endl;
#define dbgarr(i,a) cout<<#a<<"["<<i<<"] = "<<a[i]<<" "<<endl;
#define nl puts("")

//File input/output
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

ll bigmod(ll a,ll b, ll m) { ll res = 1; while(b) { if(b & 1) { res = ( (res % m) * (a % m) ) %m ; } a= ((a%m) * (a%m)) %m; b >>= 1; } return res; }
ll modInverse(ll a, ll m){return bigmod(a,m-2,m);}

////============ CONSTANT ===============////
#define inf   INT_MAX                                           //infinity value
#define eps   1e-9
#define mx    100010
#define mod   1000000007
////=====================================////


int row,col;

struct info
{
    int x,y;
    info(int xx,int yy)
    {
        x=xx;
        y=yy;
    }
    info(){}
};

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int in_grid(int i,int j)
{
    if((i >= 0 && i < row) && (j >= 0 && j < col))
    {
        return 1;
    }
    else
        return 0;
}


int jan[1010][1010],f[1010][1010];
bool vis[1010][1010];
char grid[1010][1010];

int bfs(info n)
{
    cover(vis,0);

    queue<info>q;
    q.push(n);

    jan[n.x][n.y]=0;

    while(!q.empty())
    {
        info p=q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            int x=p.x+dx[i];
            int y=p.y+dy[i];

            if(!in_grid(x,y))
                continue;

            if(!vis[x][y] && grid[x][y]=='.')
            {
                if(jan[p.x][p.y]==inf)
                    jan[p.x][p.y]=0;
                jan[x][y]=jan[p.x][p.y]+1;
                vis[x][y]=1;
                q.push(info(x,y));
            }
        }
    }

    cover(vis,0);

    vector<info>fire;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(grid[i][j]=='F')
            {
                f[i][j]=0;
                q.push(info(i,j));
            }
        }
    }

    while(!q.empty())
    {
        info p=q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            int x=p.x+dx[i];
            int y=p.y+dy[i];

            if(!in_grid(x,y))
                continue;

            if(!vis[x][y] && grid[x][y]=='.')
            {
                f[x][y]=f[p.x][p.y]+1;
                vis[x][y]=1;
                q.push(info(x,y));
            }
        }
    }

}

int main()
{
    int t,no=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&row,&col);

        info src;
        for(int i=0;i<row;i++)
        {
            scanf("%s",grid[i]);
            for(int j=0;j<col;j++)
            {
                jan[i][j]=inf;
                f[i][j]=inf;
                if(grid[i][j]=='J')
                {
                    src = info(i,j);
                }
            }
        }

        bfs(src);

        int res=inf;

        for(int i=0;i<col;i++)
        {
            if(jan[0][i]<f[0][i])
                res=min(res,jan[0][i]);
        }

        for(int i=0;i<col;i++)
        {
            if(jan[row-1][i]<f[row-1][i])
                res=min(res,jan[row-1][i]);
        }

        for(int i=0;i<row;i++)
        {
            if(jan[i][0]<f[i][0])
                res=min(res,jan[i][0]);
        }

        for(int i=0;i<row;i++)
        {
            if(jan[i][col-1]<f[i][col-1])
                res=min(res,jan[i][col-1]);
        }

        if(res==inf)
        {
            printf("IMPOSSIBLE\n");
        }
        else
        {
            printf("%d\n",res+1);
        }

    }

    return 0;
}
