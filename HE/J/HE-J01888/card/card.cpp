#include <bits/stdc++.h>
using namespace std;
int t[500005],ans[500005];
struct col
{
	int age,x;
}a[500005];
//bool vis[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i].x);
	}
	bool flag=1;
	for (int i=1;i<=m;i++)
	{
		memset(t,0,sizeof(t));
		flag=1;
		for (int j=i;j<=n;j++)
		{
			if (t[a[j].x]>0)
			{
				for (int z=a[a[j].x].age;z<j;z++)
				{
					t[a[z].x]--;
				}
			}
			t[a[j].x]++;
			if (flag)
			{
				flag=0;
				a[a[j].x].age=j;
			}
		}
		for (int j=1;j<=m;j++)
		{
			if (t[a[j].x]>=1)
			{
				ans[a[j].x]++;
			}
		}
		
	}
	for (int i=1;i<=m;i++)
	{
		printf("%d ",n);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
