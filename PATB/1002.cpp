#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int sum,temp,count=0;
    char ch;
    string s;
    string b[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    while((ch=getchar()) != '\n')
    {
        sum += (ch - '0');
    }
    temp = sum;
    while(temp)
    {
        temp /= 10;
        count++;
    }
    for(int i = count-1; i >= 0; i--)
    {
        s[i] = sum%10 + '0';
        sum /= 10;
    }
    for(int j = 0; s[j] != 0; j++)
    {
        if(j>0)
        {
            cout<<" ";
        }
        cout<<b[s[j]-'0'];
    }
    return 0;
}
