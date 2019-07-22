#include <iostream>
#include <algorithm>
using namespace std;

struct school{
    int n;     //学校编号
    int score; //得分
    int sum;   //总分
};
school sc[10001];
school b[10001]={0};

bool cmp(school a, school b)
{
    return a.sum >= b.sum;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>sc[i].n>>sc[i].score;
        b[sc[i].n].n = sc[i].n;
        b[sc[i].n].sum += sc[i].score;
    }
    sort(b, b+n, cmp);
    cout<<b[0].n<<" "<<b[0].sum;
}
