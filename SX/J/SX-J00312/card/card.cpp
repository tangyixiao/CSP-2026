#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool b[200005][3005];
ll a[200005], v[200005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n; i >= 1; i--) {
		if (v[a[i]] == 0) {
			b[i][a[i]] = 1;
			for (int j = 1; j <= m; j++)
				b[i][j] = b[i][j] | b[i + 1][j];
		} else {
			for (int j = 1; j <= m; j++)
				b[i][j] = b[v[a[i]]][j];
		}
		v[a[i]] = i;
	}
	for (int i = 1; i <= m; i++) {
		ll ans = 0;
		for (int j = 1; j <= n; j++)
			ans += b[j][i];
		cout << ans << " ";
	}
	return 0;
}
