#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5+5;
ll n, ans, m;
ll a[maxn], vis[maxn];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int j = 31; j >= 0; j--) {
		ll cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (vis[i]) continue;
			cnt += (a[i] >> j)&1;
		}
		if (cnt >= m) {
			ans += (1<<j);
			for (int i = 1; i <= n; i++) {
				if (!((a[i]>>j)&1)) vis[i] = 1;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
