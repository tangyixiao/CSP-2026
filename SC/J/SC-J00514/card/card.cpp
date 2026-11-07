#include <bits/stdc++.h>

using namespace std;

const int maxn = 5e5 + 5, maxm = 3e5 + 5;

int lst[maxm], nxt[maxm], ans[maxm], has[maxm], id[maxn], a[maxn];
vector<int> v;

signed main() {
	#ifdef tcode
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	#endif
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	reverse(a + 1, a + 1 + n);
	for (int i = 1; i <= n; ++i) {
		if (lst[a[i]] == 0) ans[a[i]] = n - i + 1;
		nxt[lst[a[i]]] = i;
		lst[a[i]] = i;
	}
	for (int i = 1; i <= m; ++i) nxt[lst[i]] = n;
	memset(has, -1, sizeof has);
	for (int i = 1; i <= n; ++i) {
		if (has[a[i]] != -1) {
			for (int j = has[a[i]] + 1; j < v.size(); ++j) {
				ans[v[j]] -= nxt[id[j]] - i + 1;
				has[v[j]] = -1; 
			}
			v.erase(v.begin() + has[a[i]], v.end());
		}
		has[a[i]] = v.size();
		id[v.size()] = i;
		v.push_back(a[i]);
//		for (int j : v) cout << j << ' ';
//		cout << endl;
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << " ";
	return 0;
}