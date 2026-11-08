#include <bits/stdc++.h>
using namespace std;

long long n, a[214514], s[40][214514], ans, m, pw[40];

map <long long, long long> vis;

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	pw[0] = 1;
	for(int i = 1; i <= 35; i++)
	{
		pw[i] = pw[i - 1] * 2;
	}
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
		for(int j = 0; j <= 31; j++)
		{
			if(a[i] & pw[j])
			{
				s[j][++s[j][0]] = a[i];
			}
		}
	}
	long long f = 0;
	for(int i = 31; i >= 0; i--)
	{
		if(f == 0)
		{
			if(s[i][0] >= m)
			{
				f = 1;
				ans += pw[i];
				for(int j = 1; j <= s[i][0]; j++)
				{
					vis[s[i][j]] = 1;
				}
			}
		}
		else
		{
			if(s[i][0] < m)
			{
				continue;
			}
			long long ff = 0, cnt = 0;
			for(int j = 1; j <= s[i][0]; j++)
			{
				if(vis[s[i][j]] == f)
				{
					cnt++;
				}
			}
			if(cnt < m)
			{
				continue;
			}
			ans += pw[i];
			for(int j = 1; j <= s[i][0]; j++)
			{
				if(vis[s[i][j]] == f)
				{
					vis[s[i][j]] = f + 1;
				}
			}
			f++;
		}
	}
	cout << ans;
	return 0;
}
//114514
