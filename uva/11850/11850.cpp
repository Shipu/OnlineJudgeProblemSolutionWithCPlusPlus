#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[1480],p,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        sort(a,a+i);

        int r=1422-a[0];
        if(p<0)
        p*=(-1);
        int c=1;
        if(r>200)
        {
            printf("IMPOSSIBLE\n");
            continue;
        }
        else
        {
            for(i=0;i<n-1;i++)
            if(a[i]-a[i+1]>200)
                {
                    int c=0;
                    break;
                }

            if(c==1)
            printf("IMPOSSIBLE\n");
            else
            printf("POSSIBLE\n");

        }

}

return 0;
}
