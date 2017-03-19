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
    map<char,int>mp;
    stack<char>stk;
    int t,no=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        stk.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(stk.top()==s[i])
            stk.pop();
            else
            {
                mp[stk.top()]++;
                stk.push(s[i]);
                mp[stk.top()]++;
            }
        }
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        pf("Case %d\n",++no);
        for(int i=0;i<s.size();i++)
        pf("%c = %d\n",s[i],mp[s[i]]);
        mp.clear();
    }
    return 0 ;
}
