/******************************************************************
***   Problem       :                                           ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/

#include <stdio.h>

int main()
{
    long long n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);

        printf("%lld\n",n>>1);
    }

    return 0;
}

