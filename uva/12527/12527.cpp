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
int f;
void digit(int n)
{
    int j=0,a[100];
    while(n)
    {
        a[j++]=n%10;
        n=n/10;
    }
    f=1;
    for(int i=0;i<j;i++)
    {
        for(int k=i+1;k<j;k++)
        if(a[i]==a[k])
        f=0;
    }
}
int main()
{
    int a,b;
    while(sc("%d%d",&a,&b)==2)
    {
        int c=0;
        for(int i=a;i<=b;i++){
        digit(i);
        if(f)
        c++;
        }
        pf("%d\n",c);
    }
    return 0;
}
