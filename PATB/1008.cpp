#include <iostream>
using namespace std;

int a[101];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while(m)
    {
        int b=a[n-1];
        for(int i = n-1; i >= 0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = b;
        m--;
    }
    for(int i = 0; i < n; i++)
    {
        if(i < n-1)
        {
            cout<<a[i]<<" ";
        }
        else
        {
            cout<<a[i];
        }
    }
    return 0;
}
