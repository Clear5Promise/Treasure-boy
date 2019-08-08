#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

double p[1001];

int main()
{
    int n,k,count=0;
    double a;
    scanf("%d", &k);
    for(int i=0; i<k; i++)
    {
        scanf("%d %lf", &n, &a);
        p[n] += a;
    }
    scanf("%d", &k);
    for(int i=0; i<k; i++)
    {
        scanf("%d %lf", &n, &a);
        p[n] += a;
    }
    for(int i=0; i<1001; i++)
    {
        if(p[i] != 0)
        {
            count++;
        }
    }
    cout<<count;
    for(int i=1001; i>=0; i--)
    {
        if(p[i] != 0)
        {
            cout<<" "<<i<<" "<<fixed<<setprecision(1)<<p[i];
        }
    }
}
