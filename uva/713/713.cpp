#include<stdio.h>
#include<string.h>
int main()
{
char a[260],b[260],p[205];
int t,l,len,e,f,i,r,s,d,y,q,j;
scanf("%d",&t);
while(t--)
{
scanf("%s%s",&a,&b);
l=strlen(a);
len=strlen(b);
if(l>len)
{
y=l;
for(i=len;i<l;i++)
b[i]='0';
b[l]='\0';
}
else if(len>l)
{
y=len;
for(i=l;i<len;i++)
a[i]='0';
a[len]='\0';
}
else if(l==len)
y=len;

r=0;f=0;s=0;

for(i=0,j=0;i<y;i++,j++)
{
s=(a[i]-'0')+((b[i]-'0')+f);


if(s>9)
{
r=s%10;
p[j]=r+'0';
f=1;
}
 else{
    p[j]=s+'0';
    f=0;
    }
}
if(f==1){
    p[j]=f+'0';
    p[j+1]='\0';
    }
else{
    p[j]='\0';
    }
  i=0;
y=strlen(p);
while (p[i]=='0')
i++;
for (;i<y;i++)
printf("%c",p[i]);

printf("\n");
}

return 0;
}

