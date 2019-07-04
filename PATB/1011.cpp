#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        if(x + y > z)
        {
            cout<<"Case #"<<i<<": true"<<endl;
        }
        else
        {
            cout<<"Case #"<<i<<": false"<<endl;
        }
    }
}
