#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int n, m, a[N], b[N], vis[N], mxx = 0;

void dfs(int x) {
	if (x > m) {
		int ans = b[1];
		/*for (int i = 2; i <= m; i++) {
			cout << b[i] << " ";
		}*/
		for (int i = 2; i <= m; i++) {
			ans &= b[i];
		}
		//cout << ans << "\n";
		mxx = max(mxx, ans);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i])
			continue;
		b[x] = a[i];
		vis[i] = 1;
		dfs(x + 1);
		vis[i] = 0;
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int mx = 0;
		for (int i = 1; i <= n; i++) {
			mx = max(mx, a[i]);
		}
		cout << mx;
	} else if (m == 2) {
		int mx = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				mx = max(mx, a[i] & a[j]);
			}
		}
		cout << mx;
	} else if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans &= a[i];
		}
		cout << ans;
	} else {
		dfs(1);
		cout << mxx;
	}
	return 0;
}