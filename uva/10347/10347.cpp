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
    double a,b,c,n,s;
    while(sc("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        n=(4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c)));
        if(n>0)
        pf("%.3lf\n",n);
        else
        pf("-1.000\n",n);
    }
    return 0;
}
