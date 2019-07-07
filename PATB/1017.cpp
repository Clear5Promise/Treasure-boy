#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a;
    int b,div,mod;
    cin>>a>>b;
    int alen = a.size();
    div = (a[0] - '0') / b;
    mod = (a[0] - '0') % b;
    if(alen == 1 || div != 0)
    {
        cout<<div;
    }
    for(int i = 1; i < alen; i++)
    {
        div = (mod * 10 + (a[i] - '0')) / b;
        cout<<div;
        mod = (mod * 10 + (a[i] - '0')) % b;
    }
    cout<<" "<<mod;
    return 0;
}
