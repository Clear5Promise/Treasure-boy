#include <iostream>

using namespace std;

void NumToArray(int n,int Num[100])
{
    int k=0;
    while(n!=0)
    {
        Num[k] = n%10;
        n /= 10;
        k++;
    }
}

int length(int n)
{
    int i=0;
    while(n!=0)
    {
        n /= 10;
        i++;
    }
    return i;
}

int main()
{
    int a,b,c,k=0;
    cin>>a>>b;
    c = a + b;
    if(c < 0)
    {
        cout<<"-";
        c = -c;
    }
    int num[100];
    int j = length(c);
    NumToArray(c,num);
    for(int i=j-1; i >= 0; i--)
    {
        cout<<num[i];
        k++;
        if(k%3 == 0 && i!=0)
        {
            cout<<",";
        }
    }
    return 0;
}
