/******************************************************************
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_HIDDEN                               ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef  vector<int> vi;

#define ll long long
#define pb push_back

////============ CONSTANT ===============////
#define mx  30
////====================================////

ll pal[mx];

void palindrome()
{
    pal[1]=9;
    pal[2]=9;
    ll range=18;
    for(int len=3;len<mx;len=len+2)
    {
        pal[len]=pal[len-1]*10;
        pal[len+1]=pal[len];
        range+=2*pal[len];
        if(range>2000000000)
        break;
    }
}

int main()
{
    palindrome();
    ll n;
    while(scanf("%lld",&n))
    {
        if(n==0) break;
        vi v;
        for(int i=1;i<=mx;i++)
        {
            if(n<=pal[i])
            {
                int m;
                if(i%2)
                    m=(i+1)/2;
                else
                    m=i/2;

                for(int j=0;j<m;j++)
                {
                    int first=1;
                    if(j!=0)
                        first=0;

                    for(int k=first;k<=9;k++)
                    {
                        ll p=1;
                        for(ll pr=1;pr<m-j;pr++)
                        {
                            p*=10;
                        }
                        if(n<=p)
                        {
                            v.pb(k);
                            break;
                        }
                        else
                        n=n-p;
                    }
                }
                int last=v.size();

                if(i%2==1)
                    last--;

                for(int l=last-1;l>=0;l--)
                    v.pb(v[l]);

                break;
            }
            else
                n=n-pal[i];
        }
        int s=v.size();

        for(int i=0;i<s;i++)
            printf("%d",v[i]);

       puts("");
    }
    return 0;
}
