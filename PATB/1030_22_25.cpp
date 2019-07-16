#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,p;
    int ans=1;
    cin>>n>>p;
    double a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=0; j<n; j++)
    {
        for(int i=j+ans; i<n; i++)
        {
            if(a[i] <= a[j]*p)
            {
                if(i-j+1 > ans)
                {
                    ans = i-j+1;
                }
            }
        }
    }
    cout<<ans;
}
