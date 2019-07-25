#include <iostream>
#include <string.h>
using namespace std;
const int maxn=10010;
int leftP[maxn]={0};
int main()
{
    string str;
    cin>>str;
    long long sum=0, rightT=0;
    int len = str.size();
    for(int i=0; i<len; i++)
    {
        if(i>0)
        {
            leftP[i] = leftP[i-1];
        }
        if(str[i]=='P')
        {
            leftP[i]++;
        }
    }
    for(int i=len-1; i>0; i--)
    {
        if(str[i]=='T')
        {
            rightT++;
        }
        else if(str[i]=='A')
        {
            sum +=rightT*leftP[i];
        }
    }
    cout<<sum%1000000007;
}
