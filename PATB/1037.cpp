#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a[3],b[3];
    scanf("%d.%d.%d", &a[0],&a[1],&a[2]);
    scanf("%d.%d.%d", &b[0],&b[1],&b[2]);
    int x,y,z;
    bool flag = 1;   //是否欠费  1:不欠费
    if(a[0]==b[0])
    {
        if(a[1]==b[1])
        {
            if(a[2]>b[2])
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
        }
        else if(a[2]>b[2])
        {
            flag = 0;
        }
    }
    else if(a[0]>b[0])
    {
        flag = 0;
    }
    if(flag)
    {
        if(a[2] > b[2])
        {
            b[1]--;
            b[2] +=29;
            z = b[2]-a[2];
        }
        else
        {
            z = b[2]-a[2];
        }
        if(a[1] > b[1])
        {
            b[0]--;
            b[1] += 17;
            y = b[1]-a[1];
        }
        else
        {
            y = b[1]-a[1];
        }
        x=b[0] - a[0];
        cout<<x<<"."<<y<<"."<<z;
    }
    else
    {
        if(a[2]<b[2])
        {
            a[2] += 29;
            a[1]--;
            z=a[2] - b[2];
        }
        else
        {
            z=a[2] - b[2];
        }
        if(a[1]<b[1])
        {
            a[1] += 17;
            a[0]--;
            y = a[1] - b[1];
        }
        else
        {
            y = a[1] - b[1];
        }
        x=a[0] - b[0];
        cout<<"-"<<x<<"."<<y<<"."<<z;
    }
}
