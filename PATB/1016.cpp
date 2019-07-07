#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    string A,B;
    char Aa,Bb;
    cin>>A>>Aa>>B>>Bb;
    int alen = A.size();
    int blen = B.size();
    int m=0,n=0,a=0,b=0;
    for(int i=0; i < alen; i++)
    {
        if(A[i] == Aa)
        {
            m++;
        }
    }
    for(int i=0; i < blen; i++)
    {
        if(B[i] == Bb)
        {
            n++;
        }
    }
    while(m != 0)
    {
        a += pow(10, (10,(m-1))) * (Aa - '0');
        m--;
    }
    while(n != 0)
    {
        b += pow(10, (10,(n-1))) * (Bb - '0');
        n--;
    }
    cout<<a+b;
    return 0;
}
