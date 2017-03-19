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
    char s[2000000],c;
    while(gets(s))
    {
        for(int i=0, len = strlen(s);i<len;i++)
        {
            if(isalpha(s[i])!=0)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                   s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                {
                    pf("%c",s[i]);
                    i++;
                    while(isalpha(s[i]))
                    {
                        pf("%c",s[i]);
                        i++;
                    }
                    i--;
                    pf("ay");
                }
                else
                {
                    c=s[i];
                    i++;
                    while(isalpha(s[i]))
                    {
                        pf("%c",s[i]);
                        i++;
                    }
                    i--;
                    pf("%c",c);
                    pf("ay");

                }
            }
            else
            pf("%c",s[i]);
        }
       pf("\n");
}
    return 0;
}
