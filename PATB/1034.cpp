#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 100;
char res1[maxn], res2[maxn], ans1[maxn], ans2[maxn], ans3[maxn], ans4[maxn];//存储输出的各个简化之后的分数
long long A1, B1, A2, B2;//存储输入分子、分母、分子、分母（包括符号）
void sum(long long a1, long long b1, long long a2, long long b2, char temp[])//参数分别是运算数1的分子、分母，运算数2的分子、分母，temp存储了未约分的结果（最后在main函数中会统一对其简化）
{
    sprintf(temp, "%lld/%lld", a1 * b2 + a2 * b1, b1 * b2);
}
void mul(long long a1, long long b1, long long a2, long long b2, char temp[])
{
    sprintf(temp, "%lld/%lld", a1 * a2, b1 * b2);
}
long long gcd(long long a, long long b)
{
    return !b ? a : gcd(b, a % b);
}
void sim(char s[], char res[]);
 
int main()
{
    char temp[maxn];
    char s1[maxn], s2[maxn];
 
    scanf("%s%s", s1, s2);
    sscanf(s1, "%lld/%lld", &A1, &B1);
    sscanf(s2, "%lld/%lld", &A2, &B2);//获取 A1, B1, A2, B2；
    sim(s1, res1), sim(s2, res2);//化简输入的因子；
    sum(A1, B1, A2, B2, temp), sim(temp, ans1);
    sum(A1, B1, -A2, B2, temp), sim(temp, ans2);
    mul(A1, B1, A2, B2, temp), sim(temp, ans3);
    if(A2 != 0) mul(A1, B1, A2 / abs(A2) * B2, abs(A2), temp), sim(temp, ans4);
    printf("%s + %s = %s\n", res1, res2, ans1);
    printf("%s - %s = %s\n", res1, res2, ans2);
    printf("%s * %s = %s\n", res1, res2, ans3);
    printf("%s / %s = %s\n", res1, res2, !A2 ? "Inf" : ans4);
 
    return 0;
}
void sim(char s[], char res[])
{
    char temp[maxn];
    long long a, b, mgcd;
 
    sscanf(s, "%lld/%lld", &a, &b);
    mgcd = gcd(abs(a), b);//求得最大公约数（正数）
    a /= mgcd, b /= mgcd;//约分
    if(a / b)//判断是否有整数位
    {
        sprintf(temp, "%lld", a / b);
        if(a % b)//判断是否有分数
            sprintf(&temp[strlen(temp)], " %lld/%lld", abs(a % b), b);
    }
    else
    {
        if(a % b)//判断是否有分数
            sprintf(temp, "%lld/%lld", a, b);
        else sprintf(temp, "%lld", 0);//只有0的情况
    }
    if(temp[0] == '-')//最后处理一哈加括号（）的问题
        sprintf(res, "(%s)", temp);
    else sprintf(res, "%s", temp);
}