#include <iostream>
#include <cstring>
using namespace std;

int get(string str, string a[])
{
    int k=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!='[' && str[i]!=' ' &&str[i]!=']')
        {
            a[k] += str[i];
        }
        if(str[i] == ']')
        {
            k++;
        }
    }
    return k;
}

int main()
{
    string str[3];
    string shou[11], yan[11], kou[11];
    for(int i=0; i<3; i++)
    {
        getline(cin, str[i]);
    }
    int len1 = get(str[0], shou);
    int len2 = get(str[1], yan);
    int len3 = get(str[2], kou);

    int n;
    cin>>n;
    int num[n][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>num[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        int a=num[i][0],b=num[i][1],c=num[i][2],d=num[i][3],e=num[i][4];
        if(a<=len1 && b<=len2 && c<=len3 && d<=len2 && e<=len1&&a>0&&b>0&&c>0&&d>0&&e>0)
        {
            cout<<shou[a-1]<<"("<<yan[b-1]<<kou[c-1]<<yan[d-1]<<")"<<shou[e-1]<<endl;
        }
        else
        {
            cout<<"Are you kidding me? @\\/@"<<endl;
        }
    }
    return 0;
}
