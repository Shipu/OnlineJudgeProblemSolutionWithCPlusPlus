#include<iostream>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<utility>
#include<cstdlib>
#include<cstring>
#include<string>
#include<bitset>
#include<vector>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t,a,b,c,d;
    sc("%d",&t);
    while(t--)
    {
       sc("%d%d%d%d",&a,&b,&c,&d);
       if(a==b&&a==c&&a==d)
       {
           pf("square\n");
       }
       else if( (a==b && c==d)||(b==c && d==a)||(a==c&& b==d))
       {
           pf("rectangle\n");
       }
       else if((a<=b+c+d)&&(b<=c+d+a)&&(c<=d+a+b)&&(d<=a+b+c))
       {
            pf("quadrangle\n");
       }
       else
       {
           pf("banana\n");
       }
    }


    return 0;
}
