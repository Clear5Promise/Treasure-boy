#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    unsigned a[n],b[n],c[n]={0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0; i<n; i++)
    {
        if(b[i] == a[i])
        {
            c[i]=1;
            m++;
        }
    }
    cout<<m<<endl;
    for(int i=0; i<n; i++)
    {
        if(c[i]==1)
        {
            m--;
            if(m>0)
            {
                cout<<a[i]<<" ";
            }
            else
            {
                cout<<a[i];
            }
        }
    }
}
