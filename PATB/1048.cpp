#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct buffer{
    int num[100];
    int numlen;
    buffer()
    {
        memset(num, 0, sizeof(num));
        numlen=0;
    }
};

buffer toarray(char str[])
{
    buffer x;
    x.numlen = strlen(str);
    for(int i=0; i<x.numlen; i++)
    {
        x.num[i] = str[x.numlen-i-1]-'0';
    }
    return x;
}

buffer numjiami(buffer a, buffer b)
{
    buffer c;
    for(int i=0; i<a.numlen||i<b.numlen; i++)
    {
        if(1 == (i+1)%2)
        {
            c.num[i] = (a.num[i]+b.num[i])%13;
            c.numlen++;
        }
        else
        {
            int m = b.num[i]-a.num[i];
            if(m<0)
            {
                c.num[i] = m+10;
            }
            else
            {
                c.num[i] = m;
            }
            c.numlen++;
        }
    }
    return c;
}

void shuchu(buffer x)
{
    for(int i=x.numlen-1; i>=0; i--)
    {
        if(x.num[i] == 10)
        {
            cout<<"J";
        }
        else if(x.num[i] == 11)
        {
            cout<<"Q";
        }
        else if(x.num[i] == 12)
        {
            cout<<"K";
        }
        else
        {
            cout<<x.num[i];
        }
    }
}

int main()
{
    char str1[101], str2[102];
    scanf("%s%s",str1, str2);
    buffer a = toarray(str1);
    buffer b = toarray(str2);
    shuchu(numjiami(a,b));
    return 0;
}
