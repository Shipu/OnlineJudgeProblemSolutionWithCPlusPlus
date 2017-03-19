/*-----------------------------------------------*/
//Problem Setter: G. V. Cormack
//Problem Name  : Combination Lock
//Uva Problem No: 10550
//Type          : Ad hoc.
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*-----------------------------------------------*/
//Hints : http://www.questtosolve.com/browse.php?pid=10550
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
#define mod 1000000007
using namespace std;
int main()
{
    int a,b,c,s,n;
    while(cin>>n>>a>>b>>c)
    {
          if(n==0&&a==0&&b==0&&c==0) break;
           s = 0;
        if (n<a)
            s +=40-(a-n);
        else
            s+=(n-a);

        if (a > b)
            s+=40-(a-b);
        else
            s+=(b-a);

        if (b > c)
            s +=(b-c);
        else
            s +=40-(c-b);

        cout<< (1080 + (9*s))<<endl;
    }
}
