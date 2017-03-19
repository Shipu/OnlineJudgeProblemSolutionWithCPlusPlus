/*************************************
******** Team : BUBT_HIDDEN **********
**************************************
*********** Shipu Ahamed *************
*************************************/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)

#define ff first
#define se second
#define inf (1<<30)                                              //infinity value
#define pb push_back
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;
int main()
{
    string s,c;
    int n;
	int low = 0;
	int high= 11;
	while(cin>>n)
	{
	    if(n==0) break;
	    cin>>c>>s;
		if(s[0]=='o')
		{
			if(n > low && n < high)
				puts("Stan may be honest");
			else
				puts("Stan is dishonest");
			low = 0;
			high = 11;
		}
		else if(s[0]=='l'){
			low = max(low,n);}
		else if(s[0]=='h'){
			high = min(high,n);}
	}
    return 0;
}
