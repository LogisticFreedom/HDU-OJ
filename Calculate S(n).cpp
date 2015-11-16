#include<iostream>
#include<climits>
#include<cstdio>
using namespace std;
int main()
{
	unsigned long long n,s;
	while(scanf("%lld",&n)!=EOF)
	{
		s=((n*(n+1)/2%10000)*(n*(n+1)/2%10000))%10000;//最后四位
		printf("%04lld\n",s);
	}
	return 0;
}


