#include <iostream>

using namespace std;

int main()
{
    double n;
    char c;
    cin>>n>>c;
    int h= (n/2) + 0.5;
    for(int i=0; i<h; i++)
    {
        if(i == 0||i == h-1)
        {
            for(int j=0; j<n; j++)
            {
                cout<<c;
            }
            cout<<endl;
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                if(j==0 ||j == n-1)
                {
                    cout<<c;
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}
