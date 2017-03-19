/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()

#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t)
#define sff(t) scanf("%f",&t)
#define sdb(t) scanf("%lf",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define ssll(a,b) scanf("%lld%lld",&a,&b)
#define ssff(a,b) scanf("%f%f",&a,&b)
#define ssdb(a,b) scanf("%lf%lf",&a,&b)

#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PFa) printf("%f\n",a)
#define PDB(a) printf("%lf\n",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define PFN(a) printf("%f ",a)
#define PDBN(a) printf("%lf ",a

#define CP(a) cout<<a<<endl;
#define CPN(a) cout<<a<<"

#define Case(no) printf("Case %d: ",++no)
#define nl puts("")

#define debug(x) cout << #x << " -> " << (x) << endl;

#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                         //count one
#define parity(i)   __builtin_parity(i)       //evenparity 0 and odd parity 1
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

////============ CONSTANT ===============////
#define MAXLL 9223372036854775807
#define MINLL 9223372036854775808
#define MAXL  2147483647
#define MINL  2147483648
#define max7  10000007
#define max6  1000006
#define mx    (1000010)
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mod   10007
////=====================================////

template <typename T>string NumberToString( T Number ){stringstream st;st << Number;return st.str();}

int stringconvert(string& s){int p; istringstream st(s); st>>p ; return p;}
int SOD(int n){int sum=0;for(int i=1;i*i<=n;i++)sum+=(n%i)?0:((i*i==n)?i:i+n/i);return sum;}

int main()
{
    int a,n,p;
    while(sii(a))
    {
        if(a==0) break;
        ssii(n,p);
        int x,res=0;
        for(int i=1;i<n;i++)
        {
            sii(x);
            if(p<x)
             res+=x-p;
            p=x;
        }
        res+=abs(p-a);
        P(res);
    }
    return 0;
}

/*                        _______________________________________________________________
                         |                   _______  ________  ________                 |
                         |         |\     /|(  ___  )(  ____  )(  ____  )|\     /|       |
                         |         | )   ( || (   ) || (    ) || (    ) |( \   / )       |
                         |         | (___) || (___) || (____) || (____) | \ (_) /        |
                         |         |  ___  ||  ___  ||  ______)|  ______)  \   /         |
                         |         | (   ) || (   ) || (       | (          ) (          |
                         |         | )   ( || )   ( || )       | )          | |          |
                         |         |/     \||/     \||/        |/           \_/          |
                         |                                                               |
                         |    _______  _______  ______  _________ _        _______  _    |
                         |   (  ____ \(  ___  )(  __  \ \__   __/( (    /|(  ____ \( )   |
                         |   | (    \/| (   ) || (  \  )   ) (   |  \  ( || (    \/| |   |
                         |   | |      | |   | || |   ) |   | |   |   \ | || |      | |   |
                         |   | |      | |   | || |   | |   | |   | (\ \) || | ____ | |   |
                         |   | |      | |   | || |   ) |   | |   | | \   || | \_  )(_)   |
                         |   | (____/\| (___) || (__/  )___) (___| )  \  || (___) | _    |
                         |   (_______/(_______)(______/ \_______/|/    )_)(_______)(_)   |
                         |_______________________________________________________________|

                                 _________          _________ ________  __      __
                                (  ______ \|\     /|\__   __/(  ____  )|  \    /  |
                                | (      \/| )   ( |   ) (   | (    ) ||  |    |  |
                                | (_______ | (___) |   | |   | (____) ||  |    |  |
                                (_______  )|  ___  |   | |   |  ______)|  |    |  |
                                        ) || (   ) |   | |   | (       |  |    |  |
                                /\______) || )   ( |___) (___| )       |  (____)  |
                                \_________||/     \|\_______/|/         \ ______ /

*/

