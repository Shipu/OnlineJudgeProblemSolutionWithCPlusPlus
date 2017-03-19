#include <iostream>
#include <cstdio>
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
int main ()
{

    int t;
    int no = 0;
    scanf ("%d", &t);
    while ( t-- ) {
        char s [20];
        scanf ("%s", s);
        int l = strlen(s);
        int a = 0,b=0;
        char s1 [10];
        int sum= 0;
        printf ("Case %d: ", ++no);
        sscanf(s, "%d%s", &a, s1);
        int f = 1;
        for ( int i = 0; i < l; i++ ) {
            if ( isdigit(s [i]) && f )
            continue;
            f = 0;
            if ( isdigit(s [i]) ) {
                f = 1;
                b = s [i] - '0';
                break;
            }
        }

        sum= (a * 50)+(b * 5);
        printf ("%d", sum/ 100);
        sum%= 100;
        if (sum) {
            if ( sum% 10 == 0 )
            printf (".%d", sum/ 10);
            else
            printf (".%d", sum);
        }
        printf ("\n");
    }

	return 0;
}


