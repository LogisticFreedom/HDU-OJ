#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    bool flag = false;
    while(cin>>s)
    {
        if (flag)
            cout<<endl;
        else
            flag = true;
        int sum = 0;
        for(int i = 0;i < s.length();i++)
        {
            int num = s[i]-'0';
            if (num%2 == 0)
                sum += num;
        }
        cout<<sum<<endl;
    }
}
