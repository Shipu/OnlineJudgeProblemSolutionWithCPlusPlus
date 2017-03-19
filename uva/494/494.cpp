#include<stdio.h>
int main()
{
    int i,c,f;
    char a[1000];
    while(gets(a))
    {
        c=0;
        f=1;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(f)
                c++;
                f=0;
            }
            else
            f=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
