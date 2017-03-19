#include<stdio.h>
int main()
{
    long n,sum,s;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        break;
        if (n<10)
        printf("%ld\n",n);
        else
        {
        while(n>9)
        {
        sum=0;
        while(n!=0)
        {
            sum+=(n%10);
            n/=10;
        }
        n=sum;
        }
        printf("%ld\n",n);
        }
    }
    return 0;
}
