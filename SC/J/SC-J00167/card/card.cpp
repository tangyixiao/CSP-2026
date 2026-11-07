#include<bits/stdc++.h>
using namespace std;
int a[500010], cnt[300010], ans[300010];
int main(void)
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		memset(cnt, 0, sizeof(cnt));
		vector<int> now;
		now.clear();
		for(int j = i;j <= n;j++)
		{
			if(cnt[a[j]])
			{
				for(int k = 0;k < now.size();k++)
				{
					if(now[k] == a[j])
					{
						for(int sb = k;sb < now.size();sb++)
						{
							cnt[now[sb]]--;
							now[sb] = -1;
						}
					}
				}
			}
			cnt[a[j]]++;
			now.push_back(a[j]);
		}
		for(int g : now)
		{
			if(~g)
			{
				ans[g]++;
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << ans[i] << ' ';
	}
	return 0;
}
/*
5 3
31 3 1 15 7
*/