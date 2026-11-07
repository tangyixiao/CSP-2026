#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, m, ans, s1[200010], s2[200010];
bool b[200010];
vector<int> a;

void dfs(int i) {
	if (i == n + 1) {
		int cnt = 0;
		for (int j = 1; j <= n; j++)
			cnt += b[j];
		if (cnt != m)
			return;
		int cur = 0;
		for (int j = 1; j <= n; j++)
			if (b[j]) {
				if (!cur)
					cur = a[j];
				else
					cur &= a[j];
			}
		ans = max(ans, cur);
		return;
	}
	b[i] = true;
	dfs(i + 1);
	b[i] = false;
	dfs(i + 1);
}

void solve() {
	dfs(1);
	cout << ans << '\n';
}

void solve2() {
	int ans = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i != j)
				ans = max(ans, a[i] & a[j]);
	cout << ans << '\n';
}

void solve3() {
	int ans = 0;
	s1[1] = a[1];
	for (int i = 2; i <= n; i++)
		s1[i] = s1[i - 1] & a[i];
	s2[n] = a[n];
	for (int i = n - 1; i; i--)
		s2[i] = s2[i + 1] & a[i];
	for (int i = 1; i <= n; i++)
		ans = max(ans, s1[i - 1] & s2[i + 1]);
	cout << ans << '\n';
}

signed main() { 
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> m;
	a.resize(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (n <= 20) {
		solve();
		return 0;
	}
	if (m == 1) {
		cout << *max_element(a.begin() + 1, a.end()) << '\n';
		return 0;
	}
	if (m == 2) {
		solve2();
		return 0;
	} 
	if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++)
			ans &= a[i];
		cout << ans << '\n';
		return 0;
	}
	if (m == n - 1) {
		solve3();
		return 0;
	}
	return 0;
}
/*
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12

60 pts
*/
