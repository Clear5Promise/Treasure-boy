#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;  // 递减排序
}

void sumtoarr(int k,int num[])
{
    for(int i = 0; i < 4; i++)
    {
        num[i] = k % 10;
        k = k / 10;
    }
}

int arrtosum(int num[])
{
    int sum=0;
    for(int i=0; i < 4; i++)
    {
        sum = sum*10 + num[i];
    }
    return sum;
}

int main()
{
    int n,amax,amin;
    cin>>n;
    int a[4];
    while(1)
    {
        sumtoarr(n, a);
        sort(a,a+4);
        amin = arrtosum(a);
        sumtoarr(n, a);
        sort(a,a+4,cmp);
        amax = arrtosum(a);
        n = amax - amin;
        cout<<setw(4)<<setfill('0')<<amax<<" - "<<setw(4)<<setfill('0')<<amin<<" = "<<setw(4)<<setfill('0')<<n<<endl;
        if(n == 0 || n == 6174)
        {
            break;
        }
    }
    return 0;
}
