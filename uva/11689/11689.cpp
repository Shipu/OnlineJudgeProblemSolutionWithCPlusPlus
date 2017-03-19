#include<stdio.h>
int main()
{
    int n,e,f,c,a,b,d,i;
    while (scanf("%d",&n)==1)
    {
        for (i=0;i<n;i++)
        {
            scanf("%d %d %d",&e,&f,&c);
            b=0;
            d=e+f;
            while (d>=c)
            {
                a=d/c;
                b=b+a;
                d=a+(d%c);
            }
            printf("%d\n",b);
        }
    }
    return 0;
}
