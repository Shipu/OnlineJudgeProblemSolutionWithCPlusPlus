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
#define ll long lenong
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
	long int t,j,i,sum,l1,len,p,l2,d;
    char a[100000],b[100000],c[100000];
    while(gets(c))
    {
        l2=0;
        sum=0;
        l1=-1;
        len=strlen(c);
            for(i=0;i<len;i++)
            {
                l1=l1+1;
                if(c[i]==' ')
                break;
                a[i]=c[i];
            }
            for(j=l1;j<len;j++)
            {
                b[j-l1]=c[j];
                l2=l2+1;
            }
        p=l1;
        d=0;
        for(i=0;i<p;i++)
            for(j=d;j<l2;j++)
            {
                if(a[i]==b[j])
                {
                    sum=sum+1;
                    d=j+1;
                    break;
                }
            }
        if(sum==p)
        printf("Yes\n");
        else
        printf("No\n");
    }
return 0;
}

