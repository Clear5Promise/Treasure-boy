#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    double c1,c2;
    cin>>c1>>c2;
    long long time = ((c2-c1)/100)+0.5;
    int hour = time/3600;
    int min = time%3600/60;
    int ss = time%60;
    printf("%02d:%02d:%02d",hour,min,ss);
}
