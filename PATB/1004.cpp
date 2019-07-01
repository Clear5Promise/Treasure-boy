#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
    char name[11];
    char id[11];
    int score;
};
student s[1010];

bool cmp(student a, student b)
{
    if(a.score != b.score)
    {
        return a.score > b.score; //成绩从高到低排
    }
}

int main()
{
    int n,i;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>s[i].name>>s[i].id>>s[i].score;
    }
    sort(s,s+n,cmp);
    cout<<s[0].name<<" "<<s[0].id<<endl;
    cout<<s[n-1].name<<" "<<s[n-1].id<<endl;
}
