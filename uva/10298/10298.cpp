#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
char s[10000000];
using namespace std;
int main()
{
    int a,i,b;
   while(gets(s))
   {
       if(s[0]=='.'&&!s[1])
       break;
       a=strlen(s);
       b=1;
       for(i=1;s[i];i++)
       while(s[i]!=s[i%b])
       b++;
       if(i%b==0)
       cout<<a/b<<endl;
       else
       cout<<"1\n";
   }
    return 0;
}
