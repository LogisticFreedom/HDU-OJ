#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct node
{
	char name[6666];
	char time[6666];
}
;
node f[6666];
bool cmp(node a,node b)
{
	if(a.time!=b.time)
		return strcmp(a.time,b.time)<0;
	else
		return strcmp(a.name,b.name)<0;
}
int main()
{
	int n,i,j;
	int c=0;
	int t=1;
	while(scanf("%d",&n)&&n)
	{
		if(t>1)
			printf("\n");
		for(i=1;i<=n;i++)
			scanf("%s%s",f[i].name,f[i].time);
		sort(f+1,f+n+1,cmp);
		printf("Case #%d\n",++c);
		for(i=1;i<=n;i++)
		{
			printf("%s %d\n",f[i].name,i);
			if(strcmp(f[i].time,f[i+1].time)==0)
			{
				printf("%s %d\n",f[i+1].name,i);
				i++;
			}
		}
		t++;
	}
	return 0;
}
