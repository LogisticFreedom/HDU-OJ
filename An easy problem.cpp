#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        while(t--)
        {
            int n;
            cin>>n;
            for (int i = 1;i <= n;i++){
                if (i == n)
                    cout<<i<<endl;
                else
                    cout<<i<<" ";
            }
            for (int i = 2;i <= n;i++){
                cout<<i<<" ";
                for (int j = 2;j <= n;j++){
                    if (j == n)
                        cout<<i*j<<endl;
                    else
                        cout<<i*j<<" ";
                }
            }
        }
    }
}
