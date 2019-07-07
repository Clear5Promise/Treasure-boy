#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

struct student{
    char id[9];
    int de;      //德分
    int cai;     //才分
    int sum;     //总分
    int cla;     //分类等级
};
student st[10001];

bool cmp(student a, student b)
{
    if(a.cla != b.cla)
    {
        return a.cla < b.cla;
    }
    else if(a.sum == b.sum)
    {
        if(a.de == b.de)
        {
            return strcmp(a.id, b.id) <0;
        }
        else
            return a.de > b.de;
    }
    else if(a.sum != b.sum)
    {
        return a.sum > b.sum;
    }
}

int main()
{
    int N,L,H,k=0;
    cin>>N>>L>>H;
    for(int i=0; i < N; i++)
    {
        cin>>st[i].id>>st[i].de>>st[i].cai;
        st[i].sum = st[i].de + st[i].cai;
        if(st[i].de >= H && st[i].cai >= H)
        {
            st[i].cla = 1;
            k++;
        }
        else if(st[i].cai < H && st[i].de >= H && st[i].cai >= L)
        {
            st[i].cla = 2;
            k++;
        }
        else if(st[i].cai < H && st[i].de < H && st[i].cai >= L && st[i].de >= L && st[i].de >= st[i].cai)
        {
            st[i].cla = 3;
            k++;
        }
        else if(st[i].cai >= L && st[i].de >= L)
        {
            st[i].cla = 4;
            k++;
        }
        else
        {
            st[i].cla = 5;
        }
    }
    sort(st, st+N, cmp);
    cout<<k<<endl;
    for(int i=0; i<N; i++)
    {
        if(st[i].cla != 5)
        {
            if(i != k-1)
            {
                cout<<st[i].id<<" "<<st[i].de<<" "<<st[i].cai<<endl;
            }
            else
            {
                cout<<st[i].id<<" "<<st[i].de<<" "<<st[i].cai;
            }
        }
    }
    return 0;
}
