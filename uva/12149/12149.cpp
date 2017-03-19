#include<stdio.h>
int main()
{
    long n,i,m,s;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        break;
        i=1;
        s=0;
        m=0;
        while(i<=n)
        {
            m=i*i;
            s+=m;
            i++;
        }
        printf("%ld\n",s);
    }
    return 0;
}
