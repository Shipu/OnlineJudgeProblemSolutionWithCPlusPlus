#include<stdio.h>
int main()
{
    long long int B,S;
    int t=1;
    while(scanf("%lld%lld",&B,&S)==2)
    {
        if(B==0&&S==0)
        break;
        if(B<=1)
        printf("Case %d: :-\\\n",t++);
        else if(B<=S)
        printf("Case %d: :-|\n",t++);
        else
        printf("Case %d: :-(\n",t++);

    }
    return 0;
}
