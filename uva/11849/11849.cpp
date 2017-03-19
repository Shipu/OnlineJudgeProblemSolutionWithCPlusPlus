#include<cstdio>
#include<map>
using namespace std;
int main()
{
    int n,m,a,i,c;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0) break;
        c=0;
        map<int,int>mp;
        for(i=0;i<m+n;i++)
        {
            scanf("%d",&a);
            mp[a]++;
            if(mp[a]==2){
            c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
