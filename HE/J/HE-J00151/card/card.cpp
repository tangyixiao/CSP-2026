#include <bits/stdc++.h>
#define int long long
using namespace std;
int ans[300007], a[500007];

int32_t main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(nullptr) -> ios::sync_with_stdio(false);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	vector<int> res;
	for (int j = 1; j <= n; j ++) {
		res.clear();
		for (int i = j; i <= n; i ++) {
			res.push_back(a[i]);
			for (int l = 0; l < res.size() - 1; l ++) {
				if (res[l] == a[i]) {
					for (int t = 1; t <= res.size() - l; t ++) res.pop_back();
					break;
				}
			}
		}
		for (int i : res) {
			ans[i] ++;
		}
	}
	for (int i = 1; i <= m; i ++)
		cout << ans[i] << " ";
	return 0;
}
