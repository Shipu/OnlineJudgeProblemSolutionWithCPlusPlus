#include <stdio.h>
int main()
{
    int t,n,j,c,i;
    char a[110];
    while(scanf("%d",&t)==1)
    {
    for(j=1;j<=t;j++)
    {
        scanf("%d %s",&n,a);
        c = 0;
        for(i=0;i<n;)
        {
            if(a[i] == '#')
            i++;
            else
            {
            c++;
            i += 3;
            }
        }
        printf("Case %d: %d\n",j,c);

    }
    break;
    }

    return 0;
}
