#include <bits/stdc++.h>
using namespace std;

int a[500010],flag[300010],cnt[300010];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		memset(flag,0,sizeof(flag));
		int cur = 1;
		for(int j = i;j <= n;j++)
		{
			if(flag[a[j]] == 0)
			{
				flag[a[j]] = cur;
				cur++;
			}
			else
			{
				cur = flag[a[j]];
				for(int k = 1;k <= m;k++)
				{
					if(flag[k] >= cur)
					{
						flag[k] = 0;
					}
				}
				flag[a[j]] = cur;
				cur++;
			}
		}
		for(int j = 1;j <= m;j++)
		{
			if(flag[j] != 0)
			{
				cnt[j]++;
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << cnt[i] << ' ';
	}
	return 0;
}
