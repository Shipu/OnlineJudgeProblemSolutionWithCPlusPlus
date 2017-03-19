/*-------------------------------------------------------------*/
//Poblem Setter : Suman Mahbub
//Uva Problem No: 10432
//Problem Name  : Polygon Inside A Circle
//Type          : Geometry, Area of a regular convex polygon.
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*--------------------------------------------------------------*/

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
int main()
{
 double r,s,p;
 while(sc("%lf %lf",&r,&s)==2)
        pf("%.3lf\n",r*r*s*sin((2*pi)/s)/2);
 return 0;
}
