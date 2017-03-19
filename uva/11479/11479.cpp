//#include<stdio.h>
//int main()
//{
//long int t,a,b,c,i;
//while(scanf("%ld",&t)==1)
//{
//i=1;
//while(i<=t)
// {
// scanf("%ld%ld%ld",&a,&b,&c);
// if((a+b)<=c || (b+c)<=a || (c+a)<=b)
// printf("Case %ld: Invalid\n",i);
// else if(a<=0 || b<=0 || c<=0)
// printf("Case %ld: Invalid\n",i);
// else if(a==b && b==c)
// printf("Case %ld: Equilateral\n",i);
// else if(a==b || b==c || c==a)
// printf("Case %ld: Isosceles\n",i);
// else
// printf("Case %ld: Scalene\n",i);
// i++;
// }
//
//}
//return 0;
//}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int i,j;
    scanf("%d", &j);
    for(i=1;i<=j;i++) {
        long int a, b, c;
        scanf("%ld %ld %ld", &a, &b, &c);
        if (a>0 && b>0 && c>0 && abs(b-c) < a && a < (b + c)) {
         if (a == b == c) printf("Case %d: Equilateral\n", i);
        else if (a == b || a == c || b == c) printf("Case %d: Isosceles\n", i);
        else printf("Case %d: Scalene\n", i);
        }
        else printf("Case %d: Invalid\n", i);
      }
      return 0;
 }
