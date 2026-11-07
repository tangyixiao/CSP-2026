#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5 + 5;
int nxt[MAXN];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	bool bo = 1;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (i > 1 && a[i] < a[i - 1]) {
			bo = 0;
		}
		nxt[a[i]] = i;
	}
	if (!bo) {
		vector<int> ans(m + 1);
		for (int i = 1; i <= n; ++i) {
			vector<char> vis(m + 1);
			int j = i;
			while (j <= n) {
				if (!vis[a[j]]) ++ans[a[j]];
				vis[a[j]] = 1;
				if (nxt[a[j]] != j) {
					j = nxt[a[j]];
				} else {
					++j;
				}
			}
		}
		for (int i = 1; i <= m; ++i) {
			cout << ans[i] << " ";
		}
	} else {
		for (int i = 1; i <= m; ++i) {
			cout << nxt[i] << " ";
		}
	}
	return 0;
}