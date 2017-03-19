#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i,a[12],t,p,mem;
    while(scanf("%d",&n)==1)
    {
        t=1;
        while(n--)
        {
            scanf("%d",&mem);
            for(i=0;i<mem;i++)
            scanf("%d",&a[i]);
            sort(a,a+i);
            p=mem/2;
            printf("Case %d: %d\n",t++,a[p]);
        }
    }
    return 0;
}
