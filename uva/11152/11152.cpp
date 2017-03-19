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
    int a, b, c;
    while (sc("%d %d %d",&a,&b,&c)==3)
    {
        double s=(a+b+c)/2.0;
        double A=sqrt(s*(s-a)*(s - b)*(s - c));
        double R=(a*b*c)/(4*A);
        double r=A/s;
        pf("%.4lf %.4lf %.4lf\n",Pi*R*R-A,A-Pi*r*r,Pi*r*r);

    }
    return 0;
}
