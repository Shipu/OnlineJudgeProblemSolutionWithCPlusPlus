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
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    long int a[3][3],move[6],sum=0,min;
   int p,n,f,i,j;
   while(1)
   {
    sum=0;f=1;
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			n=sc("%ld",&a[i][j]);
			if(n==EOF){
			  f=0;
			  break;
			}
			sum=sum+a[i][j];
		}
	}
    if(f==0)
    break;
    move[0]=a[0][0]+a[1][2]+a[2][1];
    move[1]=a[0][0]+a[1][1]+a[2][2];
    move[2]=a[0][2]+a[1][0]+a[2][1];
    move[3]=a[0][2]+a[1][1]+a[2][0];
    move[4]=a[0][1]+a[1][0]+a[2][2];
    move[5]=a[0][1]+a[1][2]+a[2][0];

	for(i=0;i<6;i++)
		move[i]=sum-move[i];

	min=move[0];
	p=0;
	for(i=1;i<6;i++)
		if(min>move[i])
		{
		  min=move[i];
		  p=i;
		}
    if(p==0)
		pf("BCG %ld\n",min);
    else if(p==1)
		pf("BGC %ld\n",min);
	else if(p==2)
		pf("CBG %ld\n",min);
    else if(p==3)
		pf("CGB %ld\n",min);
    else if(p==4)
		pf("GBC %ld\n",min);
    else if(p==5)
		pf("GCB %ld\n",min);
  }
  return 0;
}

