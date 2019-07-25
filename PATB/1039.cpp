#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a[100] = {0};
    string stra, strb;
    cin>>stra>>strb;
    bool buy=1;
    int x=0,y=0;
    int alen = stra.size();
    int blen = strb.size();
    for(int i=0; i<alen; i++)
    {
        a[stra[i]-'0']++;
    }
    for(int i=0; i<blen; i++)
    {
        if(a[strb[i]-'0']>0)
        {
            a[strb[i]-'0']--;
            x++;
        }
        else
        {
            y++;
        }
    }
    if(y)
    {
        cout<<"No"<<" "<<y;
    }
    else if(x)
    {
        cout<<"Yes"<<" "<<alen-blen;
    }
}
