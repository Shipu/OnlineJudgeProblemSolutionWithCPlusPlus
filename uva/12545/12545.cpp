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
int main()
{
    int n,no=0;
    char s[10000],t[10000],temp;
    sc("%d",&n);
    while(n--)
    {
        sc("%s%s",s,t);
        int l1=strlen(s);
        int l2=strlen(t);
        if(l1>l2||l1<l2)
        {
            pf("Case %d: -1\n",++no);
            continue;
        }
        int ws=0,wt=0,zs=0,zt=0,os=0,ot=0,c=0,d=0;
        for(int i=0;i<l1;i++)
        {
            if(s[i]=='?')
            ws++;
            if(s[i]=='0')
            c++;
            if(s[i]=='1')
            d++;
            if(s[i]=='0'&&t[i]=='1')
            zs++;
            if(s[i]=='1'&&t[i]=='0')
            os++;
            if(t[i]=='0')
            zt++;
            if(t[i]=='1')
            ot++;
        }
        if(d>ot)
        {
           pf("Case %d: -1\n",++no);
        }
        else
        {
          pf("Case %d: %d\n",++no,zs+os-min(zs,os)+ws);
        }
    }
    return 0;
}
