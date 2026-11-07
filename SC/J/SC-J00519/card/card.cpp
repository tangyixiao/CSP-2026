#include <bits/stdc++.h>
using namespace std;

int a[500005];
int id[300005];
int ans[300005];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1;i <= n;i++)
		scanf("%d", &a[i]);
	
	for(int i = 1;i <= n;i++)
	{
		int now = 1;
		for(int j = i;j <= n;j++)
		{
			if(id[a[j]] == 0)
				id[a[j]] = now;
			else
			{
				int cnt = 0;
				for(int k = 1;k <= m;k++)
					if(id[k] > id[a[j]])
					{
						cnt++;
						id[k] = 0;
					}
				now = now - cnt;
			}
			now++;
		}
		for(int j = 1;j <= m;j++)
		{
			if(id[j] != 0)
			{
				ans[j]++;
				id[j] = 0;
			}
		}
	}
	
	for(int i = 1;i <= m;i++)
	{
		printf("%d", ans[i]);
		if(i != m)
			printf(" ");
	}
	return 0;
}
