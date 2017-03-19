//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<fstream>
//#include<utility>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<bitset>
//#include<vector>
//#include<cstdio>
//#include<cctype>
//#include<cmath>
//#include<queue>
//#include<deque>
//#include<stack>
//#include<map>
//#define ll long long
//#define sc scanf
//#define pf printf
//#define pi 2*acos(0.0)
//using namespace std;
//int main()
//{
//    string s1,s2,a;
//    while(getline(cin,s1))
//    {
//        getline(cin,s2);
//        int l=s1.size();
//        int len=s2.size();
//        a="";
//        for(int i=0;i<l;i++)
//        {
//            if(s1[i]==' ')
//            continue;
//            for(int j=0;j<len;j++)
//            {
//                if(s1[i]==s2[j])
//                {
//                    a+=s1[i];
//                    s2[j]='*';
//                    break;
//                }
//            //cout<<s2<<endl;
//            }
//        }
//        sort(a.begin(),a.end());
//        cout<<a<<endl;
//    }
//    return 0;
//}
//
//
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
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        s1.erase(set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),s1.begin()),s1.end());
        cout<<s1<<endl;
    }
    return 0;
}
