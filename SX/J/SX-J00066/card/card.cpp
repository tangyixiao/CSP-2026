#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5+10;
int idx = 0, dj;
int la[N], fa[N], a[N], ans[N];
vector<int> G1[N];

void dfs(int x) {
	ans[x] = 1;
	for (auto i : G1[x]) {
		dfs(i);
		ans[x] += ans[i];
	}
	return ;
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		idx = max(idx, a[i]);
	}
	for (int i = n; i >= 1; i--) {
		if (!la[a[i]]) {
			fa[a[i]] = dj;
			la[a[i]] = a[i];
			dj = a[i];
		} else {
			idx++;
			fa[idx] = la[a[i]];
			la[a[i]] = idx;
			dj = idx;
		}
	}
	for (int i = 1; i <= idx; i++) {
		G1[fa[i]].push_back(i);
		//cout << fa[i] << "\n";
	}
	dfs(a[n]);
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}
