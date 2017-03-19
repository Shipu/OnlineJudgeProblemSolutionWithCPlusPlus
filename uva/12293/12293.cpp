/*#include<stdio.h>
int main()
{
    long long  n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        else
        {
            int p=1;
            while(p<n)
            {
            p*=2;
            p++;
            }
            if(p==n)
            printf("Bob\n");
            else
            printf("Alice\n");


        }
    }
    return 0;
}*/
#include <cmath>
#include <cstdio>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <cstring>

#include <sstream>
#include <iomanip>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <queue>
#include <deque>
#include <string>
#include <vector>

#define MP make_pair
#define PB push_back
#define foreach(e,x) for(__typeof(x.begin()) e=x.begin(); e!=x.end(); ++ e)
using namespace std;

typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

int N;
char buf[20];

void solve()
{
	scanf("%d%s", &N, buf);
	if (buf[0] == 'A') {
		-- N;
		if (N % 3 == 0)
			puts("Bob");
		else
			puts("Alice");
	} else {
		if (N % 3 == 0)
			puts("Alice");
		else
			puts("Bob");
	}
}

int main()
{
	int T; scanf("%d", &T);
	for(int i = 1; i <= T; ++ i) {
		printf("Case %d: ", i);
		solve();
	}
	return 0;
}
