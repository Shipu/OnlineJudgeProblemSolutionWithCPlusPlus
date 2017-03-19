#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int i,j,n,m,lcs[2000][2000];
int main()
{
    int a[110],b[110],no=0;

    while(sc("%d",&n)==1)
    {
        sc("%d",&m);
        if(n==0&&m==0)
        break;
        for(i=0;i<n;i++)
        sc("%d",&a[i]);
        for(i=0;i<m;i++)
        sc("%d",&b[i]);

        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                if(a[i-1]==b[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
                else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
            pf("Twin Towers #%d\nNumber of Tiles : %d\n\n",++no,lcs[n][m]);
    }
return 0;
}

