#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
   char a[500000],ch;
    while(gets(a))
    {
        for(int i=0;a[i];i++)
        {
            switch(a[i])
            {
            case 'M':case 'm':ch='b';break;
            case 'N':case 'n':ch='v';break;
            case 'B':case 'b':ch='c';break;
            case 'V':case 'v':ch='x';break;
            case 'C':case 'c':ch='z';break;
            case 'X':case 'x':ch='\'';break;
            case 'Z':case 'z':ch=';';break;
            case '\'':ch='l';break;
            case ';':ch='k';break;
            case 'L':case 'l':ch='j';break;
            case 'K':case 'k':ch='h';break;
            case 'J':case 'j':ch='g';break;
            case 'H':case 'h':ch='f';break;
            case 'G':case 'g':ch='d';break;
            case 'F':case 'f':ch='s';break;
            case 'D':case 'd':ch='a';break;
            case 'S':case 's':ch=']';break;
            case 'A':case 'a':ch='[';break;
            case ']':ch='p';break;
            case '[':ch='o';break;
            case 'P':case 'p':ch='i';break;
            case 'O':case 'o':ch='u';break;
            case 'I':case 'i':ch='y';break;
            case 'U':case 'u':ch='t';break;
            case 'Y':case 'y':ch='r';break;
            case 'T':case 't':ch='e';break;
            case 'R':case 'r':ch='w';break;
            case 'E':case 'e':ch='q';break;
            case '/':ch=',';break;
            case '.':ch='m';break;
            case ',':ch='n';break;
            default:ch=a[i];break;
            }
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
