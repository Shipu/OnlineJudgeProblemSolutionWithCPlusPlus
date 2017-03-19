#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<string>
#include<cctype>
#include<cstring>
#include<cmath>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    vector<int>v;
    map<int,int>mp;
    map<int,int>find;
    int i,n;
    while(scanf("%d",&n)==1)
    {
        v.push_back(n);
        mp[n]++;
    }
     for(i=0;i<v.size();i++)
     {
        if(find[v[i]]==0)
        printf("%d %d\n",v[i],mp[v[i]]);
        find[v[i]]++;
     }
      mp.clear();
     find.clear();
     v.clear();
    return 0;
}
