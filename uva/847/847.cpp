#include <stdio.h>
int main()
{
    long long int n,p;
    while(scanf("%lld",&n)!=EOF)
    {
        p=1;
        while(p<n)
        {
            p*=9;
            if(p>=n)
            {
                puts("Stan wins.");
                break;
            }
            p*=2;
            if(p>=n)
            {
                puts("Ollie wins.");
                break;
            }
        }
    }
}

