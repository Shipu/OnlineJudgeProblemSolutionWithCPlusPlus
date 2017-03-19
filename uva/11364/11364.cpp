#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[109],t,n,i,s;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+i);
        s=(a[i-1]-a[0])*2;
        printf("%d\n",s);

    }

    return 0;
}
