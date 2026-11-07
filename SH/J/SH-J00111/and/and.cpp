#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e3+10, it = (1<<30)-1;
int n, m, s = it, ppA = 1, ppB, ans, a[N];

void dfs(int x, int cnt, int cur) {
	if (cnt == m) {
		ans = max(ans, cur);
		return;
	}
	if (x > n) return;
	dfs(x+1, cnt, cur);
	dfs(x+1, cnt+1, cur&a[x]);
}

int lowbit(int x) { return x & (-x); }

int is2k(int x) { return lowbit(x) == x; }

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(false);
	cin >> n >> m;
	if (is2k(n)) ppB = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s &= a[i];
		if (!is2k(a[i]+1)) ppA = 0;
		if (i-1 != a[i]) ppB = 0;
	}
	if (n <= 25) {
		dfs(1, 0, it);
		cout << ans << "\n";
	}
	else if (m == 1) {
		for (int i = 1; i <= n; i++)
			ans = max(ans, a[i]);
		cout << ans << "\n";
	}
	else if (m == 2) {
		for (int i = 1; i <= n; i++)
			for (int j = i+1; j <= n; j++)
				ans = max(ans, a[i]&a[j]);
		cout << ans << "\n";
	}
	else if (m == n) cout << s << "\n";
	else if (ppA) {
		sort(a+1, a+n+1, greater<int>());
		cout << a[m] << "\n";
	}
	else if (ppB) {
		ans = n-1;
		int cnt = (int)ceil(log2(m));
		for (int i = 1; i <= cnt; i++)
			ans -= (1<<i-1);
		cout << ans << "\n";
	}
	else cout << "0\n"; 
	return 0;
}
