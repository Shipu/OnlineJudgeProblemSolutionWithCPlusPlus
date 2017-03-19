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
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n,a,b,d=0;
        vector<int>v;
        vector<int>v1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
                cin>>a;
                cin>>b;
                v.push_back(a+b);
        }
        for(int i=n-1,j=0;i>=0;i--)
        {
            if(v[i]>=10)
            {
                v1.push_back(v[i]%10);
                d=v[i]/10;
                v[i-1]=v[i-1]+d;
                d=0;
            }
            else
            v1.push_back(v[i]);
        }
        if(d!=0)
        v1.push_back(d);
        for(int i=v1.size()-1;i>=0;i--)
        cout<<""<<v1[i];
        if(t)
        pf("\n\n");
        else
        pf("\n");
    }
    return 0;
}
