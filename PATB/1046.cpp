#include <iostream>

using namespace std;

int main()
{
    int n,sumjia=0,sumyi=0;
    cin>>n;
    int a[n][4];
    for(int i=0; i<n; i++)
    {
        cin>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4];
        if((a[i][1]+a[i][3])==a[i][2]&&(a[i][1]+a[i][3])==a[i][4])
        {
            continue;
        }
        else if((a[i][1]+a[i][3])!=a[i][2]&&(a[i][1]+a[i][3])!=a[i][4])
        {
            continue;
        }
        else if((a[i][1]+a[i][3])==a[i][2]&&(a[i][1]+a[i][3])!=a[i][4])
        {
            sumyi++;
        }
        else if((a[i][1]+a[i][3])!=a[i][2]&&(a[i][1]+a[i][3])==a[i][4])
        {
            sumjia++;
        }
    }
    cout<<sumjia<<" "<<sumyi;
}
