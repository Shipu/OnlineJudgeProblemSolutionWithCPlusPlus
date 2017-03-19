#include<stdio.h>
int main()
{
	int n,i,k,a,b,c,d[1000],t=1;
	scanf("%d",&n);
	while(t<=n)
	{
		int s=0;
		scanf("%d %d %d",&a,&b,&c);
		i=1;
		while(i<=a)
		{
			scanf("%d",&d[i]);
			i++;
		}
		k=0;
		for(i=1;i<=a && i<=b;i++)
		{
			s+=d[i];
			if(s>c)
			break;
			k++;
		}
		printf("Case %d: %d\n",t,k);
		t++;
	}
	return 0;
}
