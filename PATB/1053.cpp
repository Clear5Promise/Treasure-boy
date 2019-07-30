#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N,D;
    double e;
    cin>>N>>e>>D;
    int a[N]={0};
    double cnt1=0,cnt2=0;
    for(int j=0; j<N; j++)
    {
        double k;
        cin>>k;
        for(int i=0; i<k; i++)
        {
            double e2;
            cin>>e2;
            if(e2<e)
            {
                a[j]++;
            }
        }
        if(a[j] > (k/2))
        {
            cnt1++;
            if(k>D)
            {
                cnt2++;
                cnt1--;
            }
        }
    }
    cout<<fixed<<setprecision(1)<<cnt1/N*100.0<<"%"<<" "<<cnt2/N*100.0<<"%";
}
