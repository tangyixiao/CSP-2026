#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5 * 1e5+9;
const int M = 3 * 1e5+9;
ll a[N], cnt[M];
ll t[M];
ll mp[M];
ll id[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 1; i <= n; i++) {
		if (i > 1)
			mp[a[i - 1]]--;
		memset(t, 0, sizeof(t));
		t[a[i]]++;
		if (mp[a[i]] == t[a[i]])
			cnt[a[i]]++;
		for (int j = i + 1; j <= n; j++) {
			t[a[j]]++;
			if (mp[a[j - 1]] - t[a[j - 1]] == 0 && mp[a[j]] - t[a[j]] == 0) {
				cnt[a[j]]++;
			}
		}
	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << ' ';
	return 0;
}
