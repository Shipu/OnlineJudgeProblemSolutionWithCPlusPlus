#include<stdio.h>
#include<algorithm>

using namespace std;
long long a[2000005],i,n;

int main()
{
    while (scanf("%lld",&n)==1)
    {
        if (n==0)
        break;

        for (i=0;i<n;i++)
        scanf("%lld",&a[i]);

        sort(a,a+i);

        for (i=0;i<n;i++)
        {
            printf("%lld",a[i]);
            if (i<(n-1))
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
