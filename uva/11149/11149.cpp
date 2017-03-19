#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 44
#define mod 10
int n;
struct matrix{
    int f[maxn][maxn];
};
matrix sum(matrix a,matrix b)
{
    int i,j;
    matrix s;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            s.f[i][j]=(a.f[i][j]+b.f[i][j])%mod;
    return s;
}
matrix mul(matrix a,matrix b)
{
    int i,j,k;
    matrix s;
    memset(s.f,0,sizeof(s.f));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
            s.f[i][j]=(s.f[i][j]+a.f[i][k]*b.f[k][j])%mod;
    return s;
}
matrix pows(matrix e,int b)
{
    matrix s,a;
    int i,j,k;
    a=e;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(i==j)s.f[i][j]=1;
        else s.f[i][j]=0;
    while(b)
    {
        if(b&1)
            s=mul(s,a);
        a=mul(a,a);
        b=b>>1;
    }
    return s;
}
matrix work(matrix e,int k)
{
    matrix s,a,b;
    if(k==1)
        return e;
    a=work(e,k/2);
    s=sum(a,mul(a,pows(e,k/2)));
    if(k&1)
        s=sum(s,pows(e,k));
    return s;
}
int main()
{
    int k;
    while(cin>>n>>k)
    {
        if(n==0)
            break;
        int i,j,a;
        matrix e;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a;
                e.f[i][j]=a%10;
            }
        }
        e=work(e,k);
        for(i=0;i<n;i++)
        {
            cout<<e.f[i][0];
            for(j=1;j<n;j++)
                cout<<" "<<e.f[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
/*
    just copy paste .......... totally painful .
     Multiplication method
     a + a ^ 2 + a ^ 3 + a ^ 4 + a ^ 5 = (a + a ^ 2) + a ^ 2 * (a + a ^ 2) + a ^ 5 (5 is odd), a + a ^ 2 = a + a * (a) (2 even)

     Or if k = 100 = 1010B, s = 0
     From left to right, when the 1, s = s * 2 +1; otherwise s = s * 2
     a + a ^ 2 + a ^ 3 + ... + a ^ 10: (number of changes)
     1: a
     0: a + a ^ 2 = a + a * (a);
     1: a + a ^ 2 + a ^ 3 + a ^ 4 + a ^ 5 = (a + a ^ 2) + a ^ 2 * (a + a ^ 2) + a ^ 5
     0: a + a ^ 2 + ... ^ a ^ 10 = (a + a ^ 2 + ... + a ^ 5) + a ^ 5 * (a + a ^ 2 + ... + a ^ 5 )
*/
