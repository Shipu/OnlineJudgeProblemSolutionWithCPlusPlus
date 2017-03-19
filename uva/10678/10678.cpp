#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#define pi 2*acos(0.0)
using namespace std;
int main()
{

    unsigned long long i;
    cin>>t;
    while(t--){
        double x,y;
        cin>>x>>y;
        double t;
        t=sqrt((y/2)*(y/2)-(x/2)*(x/2));
        printf("%.3lf\n",pi*y/2*t);

    }


return 0;
}
