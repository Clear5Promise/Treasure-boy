#include <stdio.h>
int Callatz(int a)
{
    if(a > 1000)
    {
        return 0;
    }
    int i=0;
    while(a !=1)
    {
        if(0 == a%2)
        {
            a = a/2;
        }
        else
        {
            a = (3*a+1)/2;
        }
        i++;
    }
    return i;
}

int main()
{
    int b;
    scanf("%d",&b);
    printf("%d",Callatz(b));
}