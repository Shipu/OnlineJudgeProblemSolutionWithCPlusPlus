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
    char s[40000],b[40000];
    int t,no=0;
    sc("%d",&t);
    getchar();
    int i=0;
    while(t--)
    {
        for(i=0;;i++)
        {
         gets(s);

        }

        int j=0;
        b[j++]=s[j];

        for(int i=1;i<strlen(s);i++)
        {
            if(s[i]==' ')
            {
                b[j++]=s[i+1];
            }
            else if (s[i]=='\n')
            b[j++]=s[i];
        }
        b[j]='\0';
        puts(b);


    }


    return 0;
}
