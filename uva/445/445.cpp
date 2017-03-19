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
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    char s[100010];
    while(gets(s))
    {
        int c=0;
        for(int i=0;s[i]!='\0';i++)
        {
            switch(s[i])
            {
            case 'b':
            {
            for(int j=0;j<c;j++)
            pf(" ");
            c=0;
            break;
            }
            case '1':
            c=c+1;
            break;
            case '2':
            c=c+2;
            break;
            case '3':
            c=c+3;
            break;
            case '4':
            c=c+4;
            break;
            case '5':
            c=c+5;
            break;
            case '6':
            c=c+6;
            break;
            case '7':
            c=c+7;
            break;
            case '8':
            c=c+8;
            break;
            case '9':
            c=c+9;
            break;
            case '!':
            pf("\n");
            default:
                {
                for(int j=0;j<c;j++)
                pf("%c",s[i]);
                c=0;    break;
                }
            }
        }
        pf("\n");
        }
    return 0;
}
