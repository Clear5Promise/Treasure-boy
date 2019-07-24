#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,m;
    scanf("%d", &n);
    int a[n],score[101]={0};
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        score[a[i]]++;
    }
    scanf("%d", &m);
    int b[m],c[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
        c[i] = score[b[i]];
    }
    for(int i=0; i<m-1; i++)
    {
        printf("%d ", c[i]);
    }
    printf("%d", c[m-1]);
}
