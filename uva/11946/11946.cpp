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
    int t,k;
    string a;
    sc("%d",&t);
    getchar();
    for(k=0;k<t;k++)
    {
        while(getline(cin,a)!='\0')
        {
            if(a.length()==0)
            {
                break;
            }
            for(int i=0;i<a.length();i++)
            {

                if(a[i]=='1')
                cout<<"I";
                else if(a[i]=='2')
                cout<<"Z";
                else if(a[i]=='3')
                cout<<"E";
                else if(a[i]=='4')
                cout<<"A";
                else if(a[i]=='5')
                cout<<"S";
                else if(a[i]=='7')
                cout<<"T";
                else if(a[i]=='8')
                cout<<"B";
                else if(a[i]=='0')
                cout<<"O";
                else if(a[i]=='6')
                cout<<"G";
                else if(a[i]=='9')
                cout<<"P";
                else
                cout<<""<<a[i];

            }
            pf("\n");
        }
        if(k!=t-1)
      cout<<endl;
    }

    return 0;
}
