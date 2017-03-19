#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4 && (a<24) && (b<60) && (c<24) && (d<60))
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        else
        {
            a=c-a;
            b=d-b;
            if(b<0)
            {
                b=b+60;
                a=a-1;
            }
            if(a<0)
                a=a+24;

            a=a*60+b;
        }
        printf("%d\n",a);
    }
    return 0 ;

}
