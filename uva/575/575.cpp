/*************************************
******** Team : BUBT_HIDDEN **********
**************************************
*********** Shipu Ahamed *************
*************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
long int l,i,s,c;
char a[100];
while(scanf("%s",&a))
{
    s=0;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        c=a[i]-'0';
        s+=c*(pow(2,l-i)-1);
    }
    if(s==0)
    break;
    printf("%ld\n",s);
}
return 0;
}
