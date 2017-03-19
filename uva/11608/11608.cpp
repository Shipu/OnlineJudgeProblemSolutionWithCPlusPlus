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
    int a[20],b[20],no=0;
    while(sc("%d",&a[0]))
    {
        if(a[0]<0)
        break;
        for(int i=1;i<=12;i++)
        sc("%d",&a[i]);
        for(int i=0;i<12;i++)
        sc("%d",&b[i]);
        pf("Case %d:\n",++no);
        for(int i=0;i<12;i++)
        {
            if(a[i]-b[i]>=0)
            {
                 a[i+1]=a[i+1]+a[i]-b[i];
                 pf("No problem! :D\n");
            }
            else
            {
                a[i+1]+=a[i];
                pf("No problem. :(\n");
            }
        }
    }


    return 0;
}
