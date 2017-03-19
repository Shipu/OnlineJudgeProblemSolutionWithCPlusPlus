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
    int n,no=0,c;
    while(sc("%d",&n)==1)
    {
        if(n<0)
        break;
        c=0;
        for(int i=1;i<n;i=i*2)
        {
            c++;
        }
        pf("Case %d: %d\n",++no,c);

    }



    return 0;
}
