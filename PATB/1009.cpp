#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int i;
    string s;
    stack<string> a;
    while(cin>>s)
    {
        a.push(s);
        i++;
        if('\n' == getchar())
        {
            break;
        }
    }
    while(!a.empty())
    {
        if(i>1)
        {
            cout<<a.top()<<" ";
        }
        else
        {
            cout<<a.top();
        }
        i--;
        a.pop();
    }
    return 0;
}
