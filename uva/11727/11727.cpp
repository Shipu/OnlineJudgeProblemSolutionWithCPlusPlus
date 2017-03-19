#include<stdio.h>
int main()
{
    int a[5],t,i,j,c,k;
    while(scanf("%d",&t)==1)
    {
        for(k=1;k<=t;k++)
        {
            for(i=0;i<3;i++)
            {
                scanf("%d",&a[i]);
                }
            for(i=0;i<3;i++)
            {
                for(j=0;j<3-i-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        c=a[j];
                        a[j]=a[j+1];
                        a[j+1]=c;
                    }
                }
            }
                printf("Case %d: %d\n",k,a[1]);
        }
    }
    return 0;
}
