#include <iostream>
#include <iomanip>
using namespace std;

struct jiedian{
    int address;   //节点地址
    int value;        //保存数据
    int next;      //下一节点地址
};
jiedian jd[100001];
jiedian sx[100001];

int main()
{
    int s,n,k,p,q;    //首节点,节点个数，反转节点个数
    cin>>s>>n>>k;
    for(int i = 0; i < n; i++)
    {
        cin>>jd[i].address>>jd[i].value>>jd[i].next;
        if(s == jd[i].address)
        {
            sx[0]= jd[i];
        }
    }
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)
        {
            if(jd[i].address == sx[j].next)
            {
                sx[j+1] = jd[i];
            }
        }
    }
    /*
    for(int j = 0; j < n; j++)
    {
        cout<<setw(5)<<setfill('0')<<sx[j].address<<" "<<sx[j].value<<" "<<setw(5)<<setfill('0')<<sx[j].next<<endl;
    }
    */
    p=n/k;
    q=k;
    while(p != 0)
    {
        int i=0;
        while(i<k)
        {
            if(i == k-1)
            {
                cout<<setw(5)<<setfill('0')<<sx[q-i-1].address<<" "<<sx[q-i-1].value<<" "<<setw(5)<<setfill('0')<<sx[q].address<<endl;
            }
            else
            {
                cout<<setw(5)<<setfill('0')<<sx[q-i-1].address<<" "<<sx[q-i-1].value<<" "<<setw(5)<<setfill('0')<<sx[q-i-2].address<<endl;
            }
            i++;
        }
        q=q+k;
        p--;
    }
    q=q-k;
    if(q<n)
    {
        while(q<n-1)
        {
            cout<<setw(5)<<setfill('0')<<sx[q].address<<" "<<sx[q].value<<" "<<setw(5)<<setfill('0')<<sx[q+1].address<<endl;
            q++;
        }
        cout<<setw(5)<<setfill('0')<<sx[n-1].address<<" "<<sx[n-1].value<<" "<<sx[n-1].next;
    }
    return 0;
}
