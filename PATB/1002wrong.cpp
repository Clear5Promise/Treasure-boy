#include <string.h>
#include <iostream>
using namespace std;

struct buffer
{
    int num[1000];
    int numlen;
    buffer()
    {
        memset(num, 0, sizeof(num));
        numlen = 0;
    }
};

buffer toarray(char s[])
{
    buffer x;
    x.numlen = strlen(s);
    for(int i=0; i<x.numlen; i++)
    {
        x.num[i] = s[i] - '0';
    }
    return x;
}

int add(buffer a)
{
    int sum = 0;
    for(int j=0; j<a.numlen; j++)
    {
        sum += a.num[j];
    }
    return sum;
}

int reverseshuzi(int n)
{
    int temp = 0;
    int m=0;
    while(n)
    {
        m = m * 10 + n % 10;
        if(temp !=m/10)
        {
            return 0;
        }
        temp = m;
        n = n/10;
    }
    return m;
}


int main()
{
    char str[1000];
    cin>>str;
    int a,b,d;
    buffer c = toarray(str);
    a = add(c);
    d = reverseshuzi(a);
    while(d !=0)
    {
        b = d%10;
        d /= 10;
        if(d != 0)
        {
            switch(b)
            {
                case 0:cout<<"lin"<<" ";break;
                case 1:cout<<"yi"<<" ";break;
                case 2:cout<<"er"<<" ";break;
                case 3:cout<<"san"<<" ";break;
                case 4:cout<<"si"<<" ";break;
                case 5:cout<<"wu"<<" ";break;
                case 6:cout<<"liu"<<" ";break;
                case 7:cout<<"qi"<<" ";break;
                case 8:cout<<"ba"<<" ";break;
                case 9:cout<<"jiu"<<" ";break;
            }
        }
        else
        {
            switch(b)
            {
                case 0:cout<<"lin"<<"";break;
                case 1:cout<<"yi"<<"";break;
                case 2:cout<<"er"<<"";break;
                case 3:cout<<"san"<<"";break;
                case 4:cout<<"si"<<"";break;
                case 5:cout<<"wu"<<"";break;
                case 6:cout<<"liu"<<"";break;
                case 7:cout<<"qi"<<"";break;
                case 8:cout<<"ba"<<"";break;
                case 9:cout<<"jiu"<<"";break;
            }
        }
    }
}
