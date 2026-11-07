#include <bits/stdc++.h>
using namespace std;

char st;
const int N = 2e5 + 5;
long long n, m, ans = -1e18, a[N], pre[N], suf[N], g[35][N], dp[N];
char ed;

int main () {

	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);

	ios::sync_with_stdio (0);
	cin.tie (0);
	cout.tie (0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	if (n >= 10000) {
		if (m == n) {
			for (int i = 2; i <= n; i++) {
				a[i] = (a[i-1] & a[i]);
			}
			cout << a[n];
			return 0;
		} else if (m == n-1) {
			pre[1] = a[1], suf[n] = a[n];
			pre[0] = suf[n+1] = (1<<30)-1;
			for (int i = 2; i <= n; i++) {
				pre[i] = (pre[i-1] & a[i]);
			}
			for (int i = n-1; i >= 1; i--) {
				suf[i] = (suf[i+1] & a[i]);
			}
			for (int i = 1; i <= n; i++) {
				ans = max (ans, pre[i-1] & suf[i+1]);
			}
			cout << ans;
			return 0;
		} else if (m == 1) {
			for (int i = 1; i <= n; i++) {
				ans = max (ans, a[i]);
			}
			cout << ans;
			return 0;
		}
	}

	for (int i = 0; i <= m; i++) {
		dp[i] = -1e18;
	}

	for (int i = 1; i <= n; i++) {
		dp[1] = a[i];

		for (int j = 1; j <= m; j++) {
			for (int k = 0; k <= 30; k++) {
				if (a[i] & (1<<k)) {
					dp[j] = max (dp[j], g[k][j-1] & a[i]);
				}
			}
		}

		for (int j = 1; j <= m; j++) {
			for (int k = 0; k <= 30; k++) {
				if (a[i] & (1<<k)) {
					g[k][j] = max (g[k][j], dp[j]);
				}
			}
		}
	}

	for (int i = m; i <= n; i++) {
		ans = max (ans, dp[m]);
	}

	cout << ans << "\n";

	return 0;
}
