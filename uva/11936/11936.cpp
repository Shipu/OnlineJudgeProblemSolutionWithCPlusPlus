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
    int t;
   sc("%d",&t);
   while(t--)
   {
       ll a,b,c;
       sc("%lld%lld%lld",&a,&b,&c);
       if(a+b>c && b+c>a && a+c>b)
        pf("OK\n");
       else
        pf("Wrong!!\n");
   }
    return 0;
}

