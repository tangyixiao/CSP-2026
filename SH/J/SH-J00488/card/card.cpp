#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
constexpr int MAXN = 5e5 + 5;
constexpr int MAXM = 3e5 + 5;

int n, m, ans[MAXM];
pii a[MAXN];
map<int, int> d;

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.in", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i].first, a[i].second = i;
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= m; i++)
		ans[i] = n + 1;
	for (int i = 1; i <= n; i++)
	{
		if (d.empty()) continue;
		for (auto it = d.begin(); it != d.end() && it->first <= a[i].first; it++)
			if (a[i].second <= it->second)
				ans[a[i].first] = min(ans[a[i].first], a[i].second);
		if (i != 1 && a[i].first == a[i - 1].first)
			d.insert({a[i].first, a[i].second});

	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] - 1 << " ";
	cout << "\n";
	return 0;
}
