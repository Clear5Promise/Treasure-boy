#include <iostream>
using namespace std;

int main()
{
    int n,num=0,k=0;
    cin>>n;
    int ss[n];
    bool p[n] = {0};
    for(int i = 2; i < n+1; i++)
    {
        if(!p[i])
        {
            ss[num++] = i;
            for(int j = i+i; j < n+1; j = j+i)
            {
                p[j] = 1;
            }
        }
    }
    for(int i = 1; i <= num; i++)
    {
        if(2 == ss[i]-ss[i-1])
        {
            k++;
        }
    }
    cout<<k;
}
