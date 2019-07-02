#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int a[1000], b[1000];

bool cmp(int c, int d)
{
    return c > d;   //从大到小排列
}
void ArrHash(int k)
{
    while(k != 1)
    {
        if(0 == k %2 )
        {
            k /= 2;
            a[k] = 1;
        }
        else
        {
            k = (3 * k + 1) / 2;
            a[k] = 1;
        }
    }
}

int main()
{
    int n;
    int c[1000];
    cin>>n;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    for(int i=0; i < n; i++)
    {
        cin>>b[i];
        ArrHash(b[i]);
    }
    int l = 0;
    for(int i=0; i < n; i++)
    {
        if(0 == a[b[i]])
        {
            c[l] = b[i];
            l++;
        }
    }
    sort(c, c+l, cmp);
    for(int i=0; i < l; i++)
    {
        if(i<l-1)
        {
            cout<<c[i]<<" ";
        }
        else
        {
            cout<<c[i];
        }
    }
    return 0;
}
