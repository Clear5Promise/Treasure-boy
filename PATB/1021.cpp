#include <iostream>
#include <string.h>
using namespace std;

char shuzi[10] = {'0','1','2','3','4','5','6','7','8','9'};
int b[10] = {0};

int main()
{
    string a;
    cin>>a;
    int alen = a.size();
    for(int i = 0; i < alen; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(a[i] == shuzi[j])
            {
                b[j]++;
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(b[i] != 0)
        {
            cout<<shuzi[i]<<":"<<b[i]<<endl;
        }
    }
}

