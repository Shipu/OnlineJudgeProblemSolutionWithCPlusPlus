#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    int n,i,g,f,j,k;
    char te[30],ju[30],t[30];
    scanf("%d",&n);
    getchar();
        for(i=1;i<=n;i++)
        {
            gets(te);
            gets(ju);
            if(strcmp(te,ju)==0)
            printf("Case %d: Yes\n",i);

            else
            {
                g=strlen(te);
                f=strlen(ju);
                if(g==f)
                printf("Case %d: Wrong Answer\n",i);
                else
                {
                    for(j=0,k=0;j<g;j++)
                    {
                        if(te[j]==' ')
                        ;
                        else
                        {
                           t[k]=te[j];
                           k++;
                        }
                    }
                    t[k]='\0';
                    if(strcmp(t,ju)!=0)
                    printf("Case %d: Wrong Answer\n",i);
                    else
                    printf("Case %d: Output Format Error\n",i);
                }


            }
        }

    return 0;
}
