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
int n,m,lcs[2000][2000];
int main()
{
    string s1,s2;
    int no=0;
    while(getline(cin,s1))
    {
        if(s1.compare("#")==0)
            break;
        getline(cin,s2);
        n=s1.size();
        m=s2.size();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
                else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        pf("Case #%d: you can visit at most ",++no);
        cout<<lcs[n][m]<<" cities."<<endl;
    }
return 0;
}
