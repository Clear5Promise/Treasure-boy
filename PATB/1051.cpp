#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double r1,p1,r2,p2;
    cin>>r1>>p1>>r2>>p2;
    double a=(r1*r2)*cos(p1+p2);
    double b=(r1*r2)*sin(p1+p2);
    if(-0.005<a && a<0)
    {
        cout<<"0.00";
    }
    else
    {
        cout<<fixed<<setprecision(2)<<a;
    }
    if(b>=0)
    {
        cout<<fixed<<setprecision(2)<<"+"<<b<<"i";
    }
    else if(-0.005<b && b<0)
    {
        cout<<"+0.00i";
    }
    else
    {
        cout<<fixed<<setprecision(2)<<b<<"i";
    }
    return 0;
}
