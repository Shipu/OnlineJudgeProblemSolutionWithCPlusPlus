#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
   int a,b,c,d,n;
   for(n=6;n<=200;n++)
   {
       a = n*n*n;
        for(int i=2;i<n;i++)
       {
           b = i*i*i;
           for(int j=i;j<n;j++)
           {
               c = j*j*j;
               for(int k=j;k<n;k++)
               {
                   d = k*k*k;
                   if(a==(b+c+d))
                   {
                   printf("Cube = %d, Triple = (%d,%d,%d)\n",n,i,j,k);
                   }

               }
           }
       }
   }
    return 0;
}
