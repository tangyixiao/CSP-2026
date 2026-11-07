#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[200010][40];
bool vis[200010];

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		int cnt = 0;
		while(x > 0)
		{
			a[i][++cnt] = x % 2;
			x /= 2;
		}
	}
	int ans = 0;
	for(int i = 30; i >= 1; i--)
	{
		int sum = 0;
		for(int j = 1; j <= n; j++)
		{
			if(vis[j])
				continue;
			sum += a[j][i];
		}
		if(sum < m)
			continue;
		ans += 1 << (i - 1);
		for(int j = 1; j <= n; j++)
		{
			if(a[j][i] == 0)
				vis[j] = 1;
		}
	}
	cout << ans << endl;
	return 0;
}
