#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

bool cmp(int a,int b)
{
    return a > b;
}

int main()
{
    int n;
    cin>>n;
    int sum[n];
    int a,b,l;
    for(int i=0; i<n; i++)
    {
        cin>>sum[i];
    }
    sort(sum,sum+n,cmp);
    int m=sqrt(n);
    while(n%m!=0)
    {
        m--;
    }
    int j=n/m;
    int martix[j][m];

    memset(martix,0,sizeof(martix));
    martix[a=0][b=0] = sum[l=0];
    while(l < n-1)
    {
        while(b+1 <= (m-1) && !martix[a][b+1])
        {
            martix[a][++b] = sum[++l];
        }
        while(a+1 <= (j-1) && !martix[a+1][b])
        {
            martix[++a][b] = sum[++l];
        }
        while(b-1 >= 0 && !martix[a][b-1])
        {
            martix[a][--b] = sum[++l];
        }
        while(a-1 >= 0 && !martix[a-1][b])
        {
            martix[--a][b] = sum[++l];
        }
    }
    for(int i=0; i<j; i++)
    {
        for(int k=0; k<m; k++)
        {
            printf("%d%c", martix[i][k], k == m - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
