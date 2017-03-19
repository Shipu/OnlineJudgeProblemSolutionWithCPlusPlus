#include<stdio.h>
int main()
{
    int t, n,m,j,a,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d",&n);
    m=j=0;
    while(n--)
    {
    scanf("%d",&a);
    m+=(a+30)/30;
    j+=(a+60)/60;
    }
    m*=10;
    j*=15;
    if(m<j)
    printf("Case %d: Mile %d\n",i,m);
    else if(j<m)
    printf("Case %d: Juice %d\n",i,j);
    else
    printf("Case %d: Mile Juice %d\n",i,m);
 }
 return 0;
}
