#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n),ans(m + 1, 0);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		vector<int> c;
		for (int j = i; j < n; j++) {
			c.push_back(a[j]);
			for (int k = 0; k < c.size() - 1; k++) {
				if (a[k] == a[j]) {
					c.resize(k + 1);
					break;
				}
			}
		}
		for (int j = 0; j < c.size(); j++) {
			ans[c[j]]++;
		}
		c.resize(0);
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
}

signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	solve();
	return 0;
}