#include <iostream>
#include <algorithm>
using namespace std;

struct PATstudent{
    char number[17];  //准考证
    int pc;           //机器号
    int seat;         //座位号
};
PATstudent ps[1010];

bool cmp(PATstudent a,PATstudent b)
{
    return a.pc<b.pc;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ps[i].number>>ps[i].pc>>ps[i].seat;
    }
    sort(ps,ps+n,cmp);
    int m;
    cin>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        cout<<ps[a[i]-1].number<<" "<<ps[a[i]-1].seat<<endl;
    }
}
