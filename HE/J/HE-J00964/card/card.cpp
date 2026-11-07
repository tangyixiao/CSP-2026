#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 505;
int n, m;
int a[N];
vector<int> ed;
int ans[N];
bool vis[N];
void solve() {
	int cnt[N];
	bool f[N];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 1; i <= n; i++) {
		if (cnt[a[i]] != 0) {
			f[a[i]] = 1;
		}
		cnt[a[i]]++;
	}
	if (m == n) {
		for (int i = 1; i <= m; i++) {
			cout << i << ' ';
		}
	} else {
		for (int i = 1; i <= m; i++) {
			if (f[i]) {
				if (n % 2 == 1) {
					cout << n - cnt[i] + 1 << ' ';
				} else {
					cout << n - cnt[i] << ' ';
				}
			} else {
				cout << i + 1 << ' ';
			}
		}	
	}
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie();
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];		
	}
	bool f = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i + 1]) f = 0;
	}
	if (f) {
		solve();
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		ed.clear();
		for (int j = i; j <= n; j++) {
			bool f = 0;
			int pos;
			for (int u = 0; u < ed.size(); u++) {
				if (a[j] == ed[u]) {
					f = 1;
					pos = u + 1;
					break;
				}
			}
			int sz = ed.size();	
			if (f) {
				while (pos <= sz) {
					ed.pop_back();
					pos++;
				}
				ed.push_back(a[j]);
			} else {
				ed.push_back(a[j]);
			}
		}
		for (int u = 0; u < ed.size(); u++) {
			if (!vis[ed[u]]) {
				ans[ed[u]]++;
				vis[ed[u]] = 1;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
