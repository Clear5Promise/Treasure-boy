#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    string a,b,c,d;
    string date[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    cin>>a>>b>>c>>d;
    int lena,lenc,i,k,j;
    lena = a.size();
    lenc = c.size();
    int day,hour,min;
    for( i = 0; i < lena; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'G' && b[i] == a[i] )
        {
            day = a[i] - 'A';
            break;
        }
    }
    for( k = i ; k < lena; k++)
    {
        if(a[k] >= '0' && a[k] <= '9'&& b[k] == a[k])
        {
            hour = a[k] - '0' + 1;
        }
        else if(a[k] >= 'A' && a[k] <= 'N'&& b[k] == a[k])
        {
            hour = a[k] - 'A' + 10;
        }
    }
    for(j = 0; j < lenc; j++)
    {
        if(c[j] >= 'a' && c[j] <= 'z' && d[j] == c[j])
        {
            min = j;
        }
    }
    cout<<date[day]<<" "<<hour<<":"<<setw(2)<<setfill('0')<<min;
    return 0;
}
