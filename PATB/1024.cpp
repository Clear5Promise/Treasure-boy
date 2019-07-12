//参考链接：https://blog.csdn.net/tangxinru123/article/details/84975248
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char h,a[10001] = {0};
    int i,e;
    scanf("%c%c.%[0-9]E%d", &h, &a[0], a+1, &e);
    if('-' == h)
    {
        printf("-");
    }
    if(e < 0)
    {
        printf("0.");
        e = -e-1;
        while(e)
        {
            printf("0");
            e--;
        }
        printf("%s", a);
    }
    else
    {
        for( i = 0;i <= e || a[i] != 0; i++)
        {
            if(i == e+1)
            {
                printf(".");
            }
            printf("%c",a[i]==0?'0':a[i]);
        }
    }
    return 0;
}
