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

struct Map
{
    char c;
    int count;
};

bool compare(Map a, Map b)
{
    if(a.count > b.count )
    {
        return true;
    }
    else if(a.count == b.count)
    {
        return a.c < b.c;
    }
    else
    {
        return false;
    }
//    return a.c < b.c ;
}
int main()
{
    char c;
    string s;
    Map str[26];
    for(int i=0; i<26; i++)
    {
        str[i].c = i + 'A';
        str[i].count = 0;
    }
    int cases, len;
    cin>>cases;
    cin.ignore();
    while(cases--)
    {
        getline(cin, s);
        len = s.length();
        for(int i=0; i<len; i++)
        {
            c = s[i];
            if('a'<=c && c <='z')
            {
                 str[c - 'a'].count++;
            }
            else if('A' <= c && c <= 'Z')
            {
                str[c - 'A'].count++;
            }
        }
    }

    sort(str, str+26,compare);
    for(int i=0; i<26; i++)
    {
        if(str[i].count==0) break;
        cout<<str[i].c<<" "<<str[i].count<<endl;
    }

}

