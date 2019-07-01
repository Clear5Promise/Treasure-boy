#include <iostream>
#include <string.h>
using namespace std;
const int maxn = 10010;
char str[maxn];
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int lefta=0,mida=0,righta=0;  //记录左、中、右中的A出现的次数
        int t=0,p=0;                  //记录P T出现的次数
        cin>>str;
        int len = strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i] == 'A' && t == 0 && p==0)
            {
                lefta++;
                continue;
            }
            if(str[i] == 'P')
            {
                p++;
                continue;
            }
            if(str[i] == 'A' && t==0 && p==1)
            {
                mida++;
                continue;
            }
            if(str[i] == 'T')
            {
                t++;
                continue;
            }
            if(str[i] == 'A' && t==1 && p==1)
            {
                righta++;
                continue;
            }
            else
            {
                break;
            }
        }
        if(righta == lefta * mida && mida > 0 && t>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        n--;
    }
    return 0;
}
