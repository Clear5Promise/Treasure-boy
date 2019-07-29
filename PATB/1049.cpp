#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n];
    double sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        sum += a[i] * (i+1) *(n-i);
    }
    cout<<fixed<<setprecision(2)<<sum;
}
