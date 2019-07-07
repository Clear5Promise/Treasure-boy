#include <iostream>
using namespace std;

int a[3] = {0};
int b[3] = {0};
int ss_a[3] = {0};   //手势获胜次数   0,1,2  布,锤子，剪刀
int ss_b[3] = {0};
string shoushi[3] = {"B","C","J"};
int amax=0,bmax=0;
int bisai(char x, char y)
{
    if(x == 'C'&& y == 'J')
    {
        a[0]++;   //赢次数+1
        ss_a[1]++; //获胜手势+1
        b[2]++;   //输次数+1
    }
    else if(y == 'C'&& x == 'J')
    {
        a[2]++;
        b[0]++;
        ss_b[1]++;
    }
    else if(x == 'J'&& y == 'B')
    {
        a[0]++;
        b[2]++;
        ss_a[2]++;
    }
    else if(y == 'J'&& x == 'B')
    {
        a[2]++;
        b[0]++;
        ss_b[2]++;
    }
    else if(x == 'B'&& y == 'C')
    {
        a[0]++;
        b[2]++;
        ss_a[0]++;
    }
    else if(y == 'B'&& x == 'C')
    {
        a[2]++;
        b[0]++;
        ss_b[0]++;
    }
    else if(x == y)
    {
        a[1]++;
        b[1]++;
    }
}

int main()
{
    int n;
    cin>>n;
    char x,y;
    while(n)
    {
        cin>>x>>y;
        bisai(x,y);
        n--;
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
    for(int i=0; i<3; i++)
    {

        if(ss_a[i]>ss_a[amax])  //寻找获胜次数最多的手势
        {
            amax = i;
        }
        if(ss_b[i]>ss_b[bmax])
        {
            bmax = i;
        }
    }
    cout<<shoushi[amax]<<" "<<shoushi[bmax];
    return 0;
}
