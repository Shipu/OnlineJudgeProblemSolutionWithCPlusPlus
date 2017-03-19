#include<stdio.h>
int main()
{
    long int t,a,b,c,d,i;
    while(scanf("%ld",&t)==1)
    {
        i=0;
        while(i<t)
        {
            scanf("%ld%ld",&a,&b);
            if(b>a||(a-b)%2!=0)
                printf("impossible\n");
            else
            {
                c=(a-b)/2;
                d=c+b;
                printf("%ld %ld\n",d,c);
            }
            i++;
        }
    }
    return 0;
}
