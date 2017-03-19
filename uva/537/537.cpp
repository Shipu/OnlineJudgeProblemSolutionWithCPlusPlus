/*************************************
******** Team : BUBT_HIDDEN **********
**************************************
*********** Shipu Ahamed *************
*** http://shipuahamed.blogspot.com **
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
    int t,no=0;
    sc("%d",&t);
    getchar();
    while(t--)
    {
        char s[10000],k[10000];
        gets(s);
        int l=strlen(s),j,uu=0,aa=0,pp=0;
        double a,p,u;

        for(int i=0;i<l;i++)
        {
            if(s[i]=='U'&&s[i+1]=='=')
            {

               i=i+2;
               j=0;
            //  pf("%c\n",s[i]);


               while(!isalpha(s[i]))
               {
                   k[j++]=s[i];
                   i++;
               }
               k[j]='\0';
                 if(s[i]=='m')
                u=0.001*atof(k);
                else if(s[i]=='k')
                u=1000.0*atof(k);
                else if(s[i]=='M')
                u=1000000.0*atof(k);
               else
                u=atof(k);
                uu=1;
             //  pf("%lf\n",u);
                 if(u<0)
                 u=-u;
            }
            else if(s[i]=='P'&&s[i+1]=='=')
            {
               i=i+2;
               j=0;
               while(!isalpha(s[i]))
               {
                   k[j++]=s[i];
                   i++;
               }
               k[j]='\0';
                  if(s[i]=='m')
                p=0.001*atof(k);
                else if(s[i]=='k')
                p=1000.0*atof(k);
                else if(s[i]=='M')
                p=1000000.0*atof(k);
               else
                p=atof(k);
                pp=1;

             //   pf("%lf\n",p);
                 if(p<0)
                  p=-p;
            }
            else if(s[i]=='I'&&s[i+1]=='=')
            {
               i=i+2;
               j=0;
               while(!isalpha(s[i]))
               {
                   k[j++]=s[i];
                   i++;
               }
               k[j]='\0';
               if(s[i]=='m')
                a=0.001*atof(k);
                else if(s[i]=='k')
                a=1000.0*atof(k);
                else if(s[i]=='M')
                a=1000000.0*atof(k);
               else
                a=atof(k);

                aa=1;

                if(a<0)
                a=-a;
            }

        }
      //  pf("%lf %lf\n",a,u);
       // pf("%d %d %d\n",pp,aa,uu);

         pf("Problem #%d\n",++no);
            if(pp==0){
                   pf("P=%.2lfW\n\n",a*u);
            }
            else if(aa==0){
                    if(p==0 && u==0)
                    pf("I=0.0A\n\n");
                 else
                 pf("I=%.2lfA\n\n",p/u);
            }
            else if(uu==0){
                 pf("U=%.2lfV\n\n",p/a);
            }
    }
    return 0;
}
/*
3
A light-bulb yields P=0W and the voltage is U=220V. Compute the current, please.
I light-bulb yields P=1W and the voltage is U=2V. Compute the current, please.
A light-bulb yields I=-1A and the voltage is U=-2V. Compute the current, please.
*/
