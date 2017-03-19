#include<stdio.h>
int main()
{
    int t,n,a[100],i,up,low,j;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            for(j=0;j<n;j++)
            scanf("%d",&a[j]);
            up=0;
            low=0;
            for(j=0;j<n-1;j++)
            {
                if(a[j]<a[j+1])
                up++;
                else if(a[j]>a[j+1])
                low++;
            }
            printf("Case %d: %d %d\n",i,up,low);
        }
    }



    return 0;
}
