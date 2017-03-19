#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        else if (n==1)
        printf("Perfect: 1!\n");
        else if (n==2)
        printf("Perfect: 6!\n");
        else if (n==3)
        printf("Perfect: 28!\n");
        else if (n==5)
        printf("Perfect: 496!\n");
        else if (n==7)
        printf("Perfect: 8128!\n");
        else if (n==13)
        printf("Perfect: 33550336!\n");
        else if (n==17)
        printf("Perfect: 8589869056!\n");
        else if (n==19)
        printf("Perfect: 137438691328!\n");
        else if (n==31)
        printf("Perfect: 2305843008139952128!\n");
        else if (n==11||n==23||n==29)
        printf("Given number is prime. But, NO perfect number is available.\n");
        else
        printf("Given number is NOT prime! NO perfect number is available.\n");
    }
}
