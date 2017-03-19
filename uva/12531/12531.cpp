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
    while(sc("%d",&t)==1)
    {
        if(t%6==0)
        pf("Y\n");
        else
        pf("N\n");
    }
  return 0;
}
