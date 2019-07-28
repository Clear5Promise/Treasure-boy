#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int a[6] = {0};
    int len = str.size();
    for(int i=0; i<len; i++)
    {
        switch (str[i])
        {
        case 'P': a[0]++; break;
        case 'A': a[1]++; break;
        case 'T': a[2]++; break;
        case 'e': a[3]++; break;
        case 's': a[4]++; break;
        case 't': a[5]++; break;
        default: break;
        }
    }
    while(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0||a[5]!=0)
    {
        for(int i=0; i<6; i++)
        {
            if(a[0]!=0)
            {
                cout<<"P";
                a[0]--;
            }
            if(a[1]!=0)
            {
                cout<<"A";
                a[1]--;
            }
            if(a[2]!=0)
            {
                cout<<"T";
                a[2]--;
            }
            if(a[3]!=0)
            {
                cout<<"e";
                a[3]--;
            }
            if(a[4]!=0)
            {
                cout<<"s";
                a[4]--;
            }
            if(a[5]!=0)
            {
                cout<<"t";
                a[5]--;
            }
        }
    }
}
