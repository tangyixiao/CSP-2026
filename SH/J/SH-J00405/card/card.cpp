#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ans[200005], lstapp[200005], col[200005], cnt[200005];
set<ll> se;
vector<pair<ll, ll> > block[200005];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> col[i], cnt[col[i]]++;
	se.insert(n);
	for (ll i = 1; i <= n; i++)
	{
		auto it = se.begin();
		if (lstapp[col[i]] && n - *se.begin() == lstapp[col[i]]) it++;
		block[col[i]].push_back({n - *it + 1, i});
		cnt[col[i]]--;
		if (lstapp[col[i]]) se.erase(n - lstapp[col[i]]);
		se.insert(n - i);
		lstapp[col[i]] = i;
		if (!cnt[col[i]]) se.erase(n - i);
	}
	for (int i = 1; i <= m; i++)
	{
		ll ans = 0;
		ll l = 0, r = -1, tl, tr;
		sort(block[i].begin(), block[i].end());
		for (auto k : block[i])
		{
			tl = k.first, tr = k.second;
			if (tl <= r) r = max(r, tr);
			else
			{
				ans += r - l + 1;
				l = tl, r = tr;
			}
		}
		ans += r - l + 1;
		cout << ans << " ";
	}
	cout << "\n";
	return 0;
}
