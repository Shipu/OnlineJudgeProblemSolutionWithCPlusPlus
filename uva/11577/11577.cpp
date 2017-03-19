/*-----------------------------------------------*/
//Problem Setter: Sumudu Fernando
//Problem Name  : Letter Frequency
//Uva Problem No: 11577
//Type          : Ad hoc.
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*-----------------------------------------------*/

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
    string s,p;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);

         int l=s.size();
         map<char,int>mp;
         map<char,int>mp1;
         priority_queue<int>pq;

         for(int i=0;i<l;i++)
         {
             if(s[i]==' ')
                continue;
             if(s[i]>='A'&&s[i]<='Z')
             {
                 s[i]=s[i]+32;
             }
             mp[s[i]]++;
         }
         for(int i=0;i<l;i++)
         {
             pq.push(mp[s[i]]);
         }
         p="";
         for(int i=0;i<l;i++)
         {
             if(pq.top()==mp[s[i]]&&mp1[s[i]]==0){
             p+=s[i];
             mp1[s[i]]++;
             }
         }
         sort(p.begin(),p.end());
         cout<<p<<endl;

    }
    return 0;
}
