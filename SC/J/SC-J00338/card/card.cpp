#include <bits/stdc++.h>

using namespace std;

constexpr int LOG = 32;

void case1(int n, int m, vector<int> &a) {
	vector<int> ans(m + 1);
	for (int s = 1; s <= n; ++s) {
		vector<int> pos(m + 1);
		for (int i = s; i <= n; ++i) {
			if (pos[a[i]]) {
				for (int j = pos[a[i]]; j < i; ++j) 
					pos[a[j]] = 0;
			}
			pos[a[i]] = i;
		}
		for (int i = 1; i <= m; ++i) if(pos[i]) ans[i]++;
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << ' ';
}

void case2(int n, int m, vector<int> &a) {
	vector<int> ans(m + 1);
	for (int i = 1; i <= n; ++i) ans[a[i]] = max(ans[a[i]], i);
	for (int i = 1; i <= m; ++i) cout << ans[i] << ' ';
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i) cin >> a[i];
	if (n <= 500 && m <= 200) {
		case1(n, m, a);
		return;
	}
	case2(n, m, a);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	solve();
	return 0;
}