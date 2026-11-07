#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int ans1 = 0x11111111, ans2, a, maxn;
const int N = 2e5+10;
int h[N];
int dp[N][2];

bool tw(int x) {
	while (x) {
		if ((x & 1) == 0)
			return 0;
		x >>= 1;
	}
	return 1;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
		ans1 = (ans1 &h[i]);
		if (h[i] > ans2) {
			maxn = ans2;
			ans2 = h[i];
		}
	}
	if (m == 1) {
		cout << ans2;
		return 0;
	}
	if (m == n) {
		cout << ans1;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				a = max((h[i] & h[j]), a);
			}
		}
		cout << a;
		return 0;
	}
	if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					a = max((h[i] & h[j] & h[k]), a);
				}

			}
		}
		cout << a;
		return 0;
	}
	if (tw(ans2)) {
		cout << maxn;
		return 0;
	}
	return 0;
}
