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
    char a[1000];
    int n,k,t,no=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%s",&n,&k,a);
        int count=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i-k;j<i;j++)
            {
                if(j<0)
                j=0;
                if(a[i]==a[j])
                {
                  count++;
                  break;
                }
            }
        }
        pf("Case %d: %d\n",++no,count);

    }

    return 0;
}
