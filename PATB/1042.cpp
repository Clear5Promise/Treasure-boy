#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    char str[1001];
    cin.getline(str,1001);
    int len = strlen(str);
    int a[27]={0};
    for(int i=0; i<len; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            a[str[i]-'A']++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            a[str[i]-'a']++;
        }
    }
    char b;
    int sum=0;
    for(int i=0; i<27; i++)
    {
        if(a[i]>sum)
        {
            sum = a[i];
            b = i+97;
        }
    }
    cout<<b<<" "<<sum;
}
