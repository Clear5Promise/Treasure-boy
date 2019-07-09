#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unsigned a,b,c;
    int m,n;
    cin>>a>>b>>m;
    c = a+b;
    vector<int> temp;
    vector<int>::iterator on;
    while(c!=0)
    {
        n = c % m;
        temp.push_back(n);
        c = c / m;
    }
    for(on = temp.end()-1; on != temp.begin()-1; on--)
    {
        cout<<*on;
    }
    return 0;
}
