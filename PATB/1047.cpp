#include <iostream>
#include <cstdio>
using namespace std;

struct team{
    int tmnum;   //队伍编号
    int actnum;  //队员编号
    int score;   //成绩
};
team tm[10001];

int main()
{
    int n;
    cin>>n;
    int score[10001] = {0};
    int max=0, maxteam;
    for(int i=0; i<n; i++)
    {
        scanf("%d-%d %d", &tm[i].tmnum, &tm[i].actnum, &tm[i].score);
        score[tm[i].tmnum] += tm[i].score;
        if(score[tm[i].tmnum] > max)
        {
            max = score[tm[i].tmnum];
            maxteam = tm[i].tmnum;
        }
    }
    cout<<maxteam<<" "<<max;
}
