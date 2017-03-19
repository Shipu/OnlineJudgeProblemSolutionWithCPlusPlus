#include <bits/stdc++.h>
using namespace std;

struct info
{
    int x,y;
    info(): x(0), y(0){}
};

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        info a[1010];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d", &a[i].x, &a[i].y);
        }
        info p;
        scanf("%d %d",&p.x, &p.y);

        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if( ((a[i].x < p.x && a[(i+1)%n].x > p.x) || (a[i].x > p.x && a[(i+1)%n].x < p.x)) && a[i].y>p.y)
            {
                cnt++;
            }
        }

        if(cnt&1)
        {
            puts("T");
        }
        else
        {
            puts("F");
        }

    }

    return 0;
}
