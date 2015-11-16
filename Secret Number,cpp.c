#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int sum = 0;
        for(int i = 0;i < s.length();i++)
        {
            int num = s[i]-'0';
            if (num%2 == 0)
                sum += num;
        }
        cout<<sum<<endl<<endl;
    }
}
