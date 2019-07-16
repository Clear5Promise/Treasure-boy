#include <iostream>
#include <string.h>
using namespace std;

int  main()
{
    string a,b;
    cin>>a>>b;
    int alen = a.size();
    int blen = b.size();
    int array[alen];
    char cResult[alen];
    for(int i=0; i < alen; i++)
    {
        for(int j=0; j<blen; j++)
        {
            if(a[i]!=b[j])
            {
                array[i] = 0;
            }
            else
            {
                array[i] = 1;
                break;
            }
        }
    }
    int k=0;
    for(int i=0; i < alen; i++)
    {
        if(array[i]==0)
        {
            if(a[i]>'a'&&a[i]<'z')
            {
                cResult[k] = a[i] - 32;
                k++;
            }
            else
            {
                cResult[k] = a[i];
                k++;
            }
        }
    }
    bool flag;
    for(int i=0; i<k; i++)
    {
        flag=0;
        for(int j=0; j<i; j++)
        {
            if(cResult[i] == cResult[j])
            {
                flag=1;
            }
        }
        if(flag == 0)
        {
            cout<<cResult[i];
        }
    }
}
