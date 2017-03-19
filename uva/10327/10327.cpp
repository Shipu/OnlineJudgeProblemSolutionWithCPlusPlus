#include<stdio.h>
int main()
{
int s,temp,i,j,a[1020],c;
while(scanf("%d",&s)==1)
{
c=0;
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=s-2;i>=0;i--)
for(j=0;j<=i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
c++;
}
}
printf("Minimum exchange operations : %d\n",c);
}
return 0;
}
