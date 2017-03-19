#include<stdio.h>
int main()
{
int n,i,a[100],t=1,sum,c;
while(scanf("%d",&n)==1 && n!=0)
{
  sum=0;
  c=0;
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     sum=sum+a[i];
       }
    sum=sum/n;
    for(i=0;i<n;i++)
    if(a[i]>sum)
    c=c+(a[i]-sum);
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",t++,c);
}
return 0;
}
