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
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        vector<int>v;
        int f=0;
        if(s[0]=='W'||s[n-1]=='B')
        {
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if((s[i]=='B'&&s[i+1]=='W')||(s[i]=='W'&&s[i+1]=='B'))
                c++;
            if(c>3)
                break;
        }
        if(c==1)
        {
            cout<<"1"<<endl;
            cout<<n;
            for(int i=1;i<=n;i++)
                cout<<" "<<i;
            cout<<endl;
            continue;
        }
        cout<<"2"<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='W')
                v.push_back(i+1);
        }
        cout<<v.size()+1;
        cout<<" 1";
        for(int i=0;i<v.size();i++)
        cout<<" "<<v[i];
        cout<<endl;
        v.clear();
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='B')
                v.push_back(i+1);
        }
        cout<<v.size()+1;
        for(int i=0;i<v.size();i++)
        cout<<" "<<v[i];
        cout<<" "<<n<<endl;
        v.clear();

    }
    return 0;
}
