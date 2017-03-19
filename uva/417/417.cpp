#include<cstdio>
#include<map>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

string a="abcdefghijklmnopqrstuvwxyz";
map<string,int>mp;
void alim()
{
    int i,j,k,m,n;
    int p=1;
    string s,s1,s2,s3,s4,s5;
    for(i=0;i<26;i++)
    {
        s=a[i];
        mp[s]=p;
        p++;
    }
    for(i=0;i<26;i++)
    {
        for(j=i+1;j<26;j++)
        {
            s1=a[i];
            s2=a[j];
            s=s1+s2;
            mp[s]=p;
            p++;
        }
    }
    for(i=0;i<26;i++)
    {
        for(j=i+1;j<26;j++)
        {
            for(k=j+1;k<26;k++)
            {
                s1=a[i];
                s2=a[j];
                s3=a[k];
                s=s1+s2+s3;
                mp[s]=p;
                p++;
            }
        }
    }
    for(i=0;i<26;i++)
    {
        for(j=i+1;j<26;j++)
        {
            for(k=j+1;k<26;k++)
            {
                for(m=k+1;m<26;m++)
                {
                s1=a[i];
                s2=a[j];
                s3=a[k];
                s4=a[m];
                s=s1+s2+s3+s4;
                mp[s]=p;
                p++;
                }
            }
        }
    }
     for(i=0;i<26;i++)
    {
        for(j=i+1;j<26;j++)
        {
            for(k=j+1;k<26;k++)
            {
                for(m=k+1;m<26;m++)
                {
                   for(n=m+1;n<26;n++)
                   {
                s1=a[i];
                s2=a[j];
                s3=a[k];
                s4=a[m];
                s5=a[n];
                s=s1+s2+s3+s4+s5;
                mp[s]=p;
                p++;
                   }
                }
            }
        }
    }

}
int main()
{
    char s[20];
    alim();
    while(scanf("%s",s)==1)
    {
        printf("%d\n",mp[s]);
    }
    return 0;
}
