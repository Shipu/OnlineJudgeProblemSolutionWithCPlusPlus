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
    int n,l,c;
    string s;
    while(cin>>n>>l>>c)
    {
        int len,line=1,page=0;
        cin>>s;
          len=s.size();
        for(int i=0;i<n-1;i++)
        {
            cin>>s;
            if((len+s.size()+1)<=c)
            {
                len+=s.size()+1;
            }
            else
            {
                line++;
                len=s.size();
            }
        }
        page=line/l;
        if(line%l)
            page++;
        cout<<page<<endl;

    }
    return 0;
}
