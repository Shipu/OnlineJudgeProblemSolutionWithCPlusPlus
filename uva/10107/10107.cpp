#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int i=0;
    int a[100000];
    while(scanf("%d",&a[i])!=EOF)
    {
        int c;
        sort(a,a+i+1);
        if(i%2==0)  printf("%d\n",a[i/2]);
        else    printf("%d\n",(a[i/2]+a[i/2+1])/2);
        i++;
    }
    return 0;
}
