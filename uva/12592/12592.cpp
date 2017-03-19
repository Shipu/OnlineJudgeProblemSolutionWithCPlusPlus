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
    string s[200],p[100],r;
    int n,k,q;
    while(cin>>n)
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            getline(cin,s[i]);
            getline(cin,p[i]);
        }
        cin>>q;
        getchar();
        while(q--)
        {
            getline(cin,r);
            for(int i=0;i<n;i++)
            {
                if(s[i]==r)
                {
                    cout<<p[i]<<endl;
                    break;
                }
            }
        }
    }
 return 0;
}
