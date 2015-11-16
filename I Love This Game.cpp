#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;
const int MAX = 7000;
struct Player
{
    string name;
    int minute;
    int second;
}player[MAX];
bool cmp(Player a,Player b)
{
    if (a.minute != b.minute)
        return a.minute < b.minute;
    else if (a.second != b.second)
        return a.second < b.second;
    else if (a.name != b.name)
        return a.name < b.name;
}
int main()
{
    int n;
    int time = 1;
    int counter = 0;
    while(scanf("%d",&n)&&n)
    {
        if(time > 1) cout<<endl;
        string s;
        for(int i = 1;i <= n;i++)
        {
            cin>>s;
            player[i].name = s;
            cin>>s;
            player[i].minute = (s[0]-'0')*10+(s[1]-'0');
            //cout<<player[i].minute<<endl;
            player[i].second = (s[3]-'0')*10+(s[4]-'0');
            //cout<<player[i].second<<endl;
        }
        sort(player+1,player+n+1,cmp);
        cout<<"Case #"<<++counter<<endl;
        cout<<player[1].name<<" 1"<<endl;
        int binglie = 0;
        for(int i = 2;i <= n;i++)
        {
            cout<<player[i].name;
            if (player[i].minute == player[i-1].minute && player[i].second == player[i-1].second)
            {
                binglie++;
                cout<<" "<<i-binglie<<endl;
            }
            else
            {
                cout<<" "<<i<<endl;
                binglie = 0;
            }

        }
        time++;
    }
}
