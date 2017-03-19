#include<stdio.h>
int main()
{
    double h1,m1,s1,h,m,s,hour,v,dist=0,left_hour=0;
    char a[200];
    while(gets(a))
    {
        sscanf(a,"%lf:%lf:%lf",&h1,&m1,&s1);
        hour=h1*60+m1+s1/60;
        if(a[8]=='\0')
        {
            dist=dist+(v*(hour-left_hour))/60;
            printf("%s %.2lf km\n",a,dist);
        }
        else
        {
            dist=dist+(v*(hour-left_hour))/60;
            sscanf(a+8,"%lf",&v);
        }
        left_hour=hour;
    }
    return 0;
}
