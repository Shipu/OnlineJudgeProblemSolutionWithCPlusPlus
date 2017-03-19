#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[20];
	int n,t,k;
	scanf ("%d", &t);
	while (t--)
	{
	    scanf("%s",a);
	    n=strlen(a);
	    if(n>10)
	    break;
	    sort(a,a+n);
	    puts(a);
        while(next_permutation (a,a+n))
        puts(a);
        printf("\n");
	}
    return 0;
}
