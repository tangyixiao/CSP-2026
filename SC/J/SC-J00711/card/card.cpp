#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
int ans[N], vis[N];
int pos[N], a[500005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	vector<int> v;
	for (int i = 1; i <= n; ++i) {
		for (int j = i; j <= n; ++j) {
			if (!vis[a[j]]) {
				vis[a[j]] = 1;
				v.emplace_back(a[j]);
				pos[a[j]] = v.size();
			} else {
				for (int l = pos[a[j]] + 1; l <= j; ++l) {
					v.erase(v.begin() + l - 1);
					--vis[a[l]];
					if (!vis[a[l]]) pos[a[l]] = 0;
				}
			}
		}
		for (int j = 1; j <= m; ++j)
			if (vis[a[j]]) 
				++ans[a[j]];
	}
	for (int i = 1; i <= m; ++i)
		cout << ans[i] << ' ';
	return 0;
}