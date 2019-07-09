#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct yuebin{
    double kc;   //库存
    double zsj;  //总售价
    double dj;   //单价
};
yuebin yb[1001];

bool cmp(yuebin a, yuebin b)
{
    return a.dj>b.dj;
}

int main()
{
    int n,need;
    double m=0.00;  //m:利润
    cin>>n>>need;
    for(int i = 0; i < n; i++)
    {
        cin>>yb[i].kc;
    }
    for(int i = 0; i < n; i++)
    {
        cin>>yb[i].zsj;
        yb[i].dj = yb[i].zsj / yb[i].kc;
    }
    sort(yb,yb+n,cmp);
    for(int i = 0; i < n; i++)
    {
        if(need <= yb[i].kc)
        {
            m += yb[i].dj * need;
            break;
        }
        else
        {
            m += yb[i].zsj;
            need -= yb[i].kc;
        }
    }
    cout<<fixed<<setprecision(2)<<m;
}
