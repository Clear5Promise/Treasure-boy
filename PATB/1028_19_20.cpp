#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct people{
    string name;
    int bir;      //生日
}pp[100001];

bool cmp(people a, people b)
{
    return a.bir<b.bir;
}

int main()
{
    int n,k,j=0;
    char str[10];
    int y,m,d;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%s %d/%d/%d",&str,&y,&m,&d);
        k = 10000*y+m*100+d;
        if((k<=20140906)&&(k>=18140906))
        {
            pp[j].name = str;
            pp[j].bir = k;
            j++;
        }
    }
    sort(pp, pp+j, cmp);
    cout<<j<<" "<<pp[0].name<<" "<<pp[j-1].name;
    system("pause");
}
