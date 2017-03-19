#include<stdio.h>
int main()
{
    int n,b,c,i,l,j,k;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&b,&c);
            for(j=0;j<c;j++)
            {
                for(k=1;k<=b;k++)
                {
                    for(l=1;l<=k;l++)
                    printf("%d",k);
                    printf("\n");
                }
                for(k=b-1;k>0;k--)
                {
                    for(l=k;l>0;l--)
                    printf("%d",k);
                    printf("\n");
                }
                if(j==c-1 && i==n-1)
                continue;
                printf("\n");
            }

        }

    return 0;
}
