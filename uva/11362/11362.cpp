#include<cstdio>
#include<string.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
bool arry(string a,string b)
{
    if(b.size()<a.size())
    return false;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        return false;
    }
    return true;
}
int main()
{
    int t,n,r,i,c=1;
    string s[10005];
    scanf ("%d",&t);
    while(t--)
    {
        scanf ("%d",&n);
        for(i=0;i<n;i++)
        cin>>s[i];

        sort(s,s+n);

        bool r=true;
        for(i=0;i<n-1;i++)
        {
            if(arry(s[i],s[i+1]))
            {
                r=false;
                break;
            }
        }
     if(r)
     printf("YES\n");
     else
     printf("NO\n");
    }
return 0;
}

