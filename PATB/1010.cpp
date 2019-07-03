#include <iostream>
using namespace std;

struct xiangshu
{
    int di;   //系数
    int zhi;  //指数
};
xiangshu xs[1001];

int main()
{
    int k=0;
    while(cin>>xs[k].di>>xs[k].zhi)
    {
        k++;
        if('\n' == getchar())
        {
            break;
        }
    }
    for(int i = 0; i <= k; i++)
    {
        if(xs[i].zhi > 1)
        {
            cout<<xs[i].di * xs[i].zhi<<" "<<xs[i].zhi-1<<" ";
        }
        else if(1 == xs[i].zhi)
        {
            cout<<xs[i].di * xs[i].zhi<<" "<<xs[i].zhi-1;
        }
        else if(0 == xs[i].zhi)
        {
            break;
        }
    }
    return 0;
}
