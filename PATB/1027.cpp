#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    char a;
    cin>>n>>a;
    m = sqrt((n+1)/2);
    for(int i=m; i>0; i--)
    {
        for(int k=0; k<m-i; k++)
        {
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
    for(int i=2; i<=m; i++)
    {
        for(int k=0; k<m-i; k++)
        {
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
    int b = n-(2*m*m-1);
    cout<<b;
}
