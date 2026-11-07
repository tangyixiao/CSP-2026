#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];
bool chs[200005];

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	ll x;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		chs[i] = 1;
	}
	ll ans = 0;
	for (int i = 30; i >= 0; i--)
	{
		int cnt = 0;
		for (int j = 1; j <= n; j++)
		{
			if (((arr[j] >> i) & 1) && chs[j]) cnt++;
		}
		if (cnt >= m)
		{
			ans += (1 << i);
			for (int j = 1; j <= n; j++)
			{
				if (!((arr[j] >> i) & 1)) chs[j] = 0;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
