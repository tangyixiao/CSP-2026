#include <bits/stdc++.h>
using namespace std;

const int MAXE = 35, MAXN = 2e5 + 5;
vector<int> b[MAXE];
int a[MAXN];
bool chosen[MAXN];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		for (int j = 0; (1 << j) <= a[i]; ++j) {
			if (a[i] & (1 << j)) {
				b[j].push_back(i);
			}
		}
	}
	bool fb = 1;
	int ans = 0;
	for (int i = 30; i >= 0; --i) {
		if (fb) {
			int res = (1 << 30) - 1;
			int cnt = 0;
			if (b[i].size() >= m) {
				for (int j : b[i]) {
					chosen[j] = 1;
					if (cnt < m) {
						++cnt;
						res &= a[j];
					}
				}
				ans = max(ans, res);
				fb = 0;
			}
		} else {
			int cnt = 0;
			if (b[i].size() >= m) {
				for (int j : b[i]) {
					if (chosen[j]) ++cnt;
				}
			}
			int res = (1 << 30) - 1, p = 0;
			if (cnt >= m) {
				for (int j = 1; j <= n; ++j) {
					if (!((1 << i) & a[j])) chosen[j] = 0;
					if (chosen[j] && p < m) {
						++p;
						res &= a[j];
					} 
				}
			}
			if (p == m)
				ans = max(ans, res);
		}
	}
	cout << ans;
	return 0;
}