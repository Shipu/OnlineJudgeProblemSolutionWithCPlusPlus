#include <stdio.h>
int main()
{
    int t,no=0;
    double f,a,c,d;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%lf%lf",&c,&d);
             f = 9*c/5+d;
             a = f*5/9;
            printf("Case %d: %.2lf\n",++no,a);
    }
    return 0;
}
