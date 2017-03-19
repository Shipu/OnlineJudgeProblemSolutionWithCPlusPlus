                        /***********************************************************
                        ******************* Team : BUBT_HIDDEN *********************
                        ************************************************************
                        ***** ☺ ☺ ☺ ********** Shipu Ahamed ********** ☺ ☺ ☺ *******
                        ***********************************************************/

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
int main(){
    int n,c[20],r[20],lcs[21][21],x;

    scanf("%d\n",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        c[x]=i;
    }

    while(scanf("%d",&x)==1){
        r[x]=0;
        for(int i=1;i<n;i++){
            scanf("%d",&x);
            r[x]=i;
        }
        cover(lcs,0);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(c[i]==r[j])
                lcs[i][j]=lcs[i-1][j-1]+1;
                else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        printf("%d\n",lcs[n][n]);
        cover(lcs,0);
    }

    return 0;
}

//faltu problem.
