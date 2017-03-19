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
int s[20] = {
6,8,
35,49,
204,288,
1189,1681,
6930,9800,
40391,57121,
235416,332928,
1372105,1940449,
7997214,11309768,
46611179,65918161
};
int main()
{
    for(int i=0;i<20;i+=2)
    printf("%10d%10d\n",s[i],s[i+1]);
    return 0;
}
