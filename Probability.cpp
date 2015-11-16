#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char s[210];
    while(gets(s)){
        int sum = 0;
        for (int i = 0;i < strlen(s);i++){
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i]-'A'+'a';
        }
        for (int i = 1;i < strlen(s);i++){
            if (s[i] == s[0])
                sum++;
        }
        double possib = double(sum)/double(strlen(s)-2);
        printf("%.5f\n",possib);
    }
}
