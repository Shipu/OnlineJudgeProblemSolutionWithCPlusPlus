#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#include<iostream>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    char s[100000];
    while(gets(s))
    {
        map<char,int>mp1;
        map<int,char>mp2;
        priority_queue<int>pq;
        for(int i=0;i<strlen(s);i++)
        {
            if(isalpha(s[i])!=0)
            mp1[s[i]]++;
        }


        for(int i=0;i<strlen(s);i++)
        {
            pq.push(mp1[s[i]]);
        }
    for (map<char,int>::iterator it=mp1.begin(); it!=mp1.end(); ++it)
    {
            if(pq.top()== it->second)
            cout<<""<<it->first;
    }
    cout<<" "<<pq.top()<<endl;
    }


    return 0;
}
