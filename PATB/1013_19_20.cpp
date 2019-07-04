#include <iostream>
using namespace std;

int sushu[10001],num=0;
bool p[10001] = {0};
void FindSH(int n)  //埃氏判素数
{
    for(int i = 2; i<10001; i++)
    {
        if(!p[i])
        {
            sushu[num++] = i;
            if(num >= n)
            {
                break;
            }
            for(int j=i+i; j<10001; j=j+i)
            {
                p[j] = 1;
            }
        }
    }
}

int main()
{
    int m,n,k=0;
    cin>>m>>n;
    FindSH(n);
    for(int i = m; i < n; i++)
    {
        k++;
        if(0 != k%10)
        {
            cout<<sushu[i-1]<<" ";
        }
        else
        {
            cout<<sushu[i-1]<<endl;
        }
    }
    cout<<sushu[n-1];
}
