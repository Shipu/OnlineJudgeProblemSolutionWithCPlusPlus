#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,x,y,f;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        k=0;
        f=0;
        x=0;
        y=0;
        for(j=1;j<n/3;j++)
        for(i=2;i<n/2;i++)
        {
           k=(i*i*i)-(j*j*j);
           if(k==n&&f==0)
           {
               x=i;
               y=j;
               f=1;
               break;
           }
           if(k>n)
           break;
        }
        if(x==0&&y==0)
        printf("No solution\n");
        else
        printf("%d %d\n",x,y);
    }




    return 0;
}
