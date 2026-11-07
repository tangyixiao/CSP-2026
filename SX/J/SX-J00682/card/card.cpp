#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[500005], b[500005], vis[500005], cnt[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof vis);
		vector<int> v;
		for (int j = i; j <= n; j++)
			v.push_back(a[j]);
		vector<int> ans;
		for (int j = 0; j < (int)v.size(); j++) {
			int k = v[j];
			if (vis[k]) {
				while (ans.back() != k) {
					vis[ans.back()] = 0, ans.pop_back();
				}
				continue;
			}
			ans.push_back(k);
			vis[k] = 1;
		}

		for (int k : ans)
			cnt[k]++;

	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << " ";
	return 0;
}
