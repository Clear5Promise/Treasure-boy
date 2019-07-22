#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    bool flag = 0;
    int len = s2.length();
    int sum=0;
    if(s1.find('+')!=string::npos)
    {
        flag = 1;
    }
    for(int i=0; i<len;i++)
    {
        if(s2[i] >= 'a' && s2[i] <= 'z')
        {
            if(s1.find(s2[i]-32) == string::npos)
            {
                cout<<s2[i];
                sum=1;     //可能为空
            }
        }
        else if(s1.find(s2[i]) == string::npos)
        {
            if(s2[i] >= 'A' && s2[i] <= 'Z' && flag==1)
            {
                continue;
            }
            else
            {
                cout<<s2[i];
                sum=1;
            }
        }
    }
    if(sum==0)
    {
        cout<<endl;
    }
}
