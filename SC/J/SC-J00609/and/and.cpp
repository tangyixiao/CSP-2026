#include <bits/stdc++.h>
#define ll long long
#define Suika 0
#define rep(i, j, k) for(int i=j;i<=k;i++)
#define dow(i, j, k) for(int i=j;i>=k;i--)
using namespace std;
const int N = 2e5 + 10;
const int Man = (1ll << 30) - 1;
int n, m, a[N];
/*
int dfs(int dep, vector<int> v, int lim) {
	if (v.empty()) return Man;
	if (dep < 0) {
		cerr << "stakin " << v[0] << "\n";
		return v[0];
	}
	vector<int> v1, v2;
	v1.clear(); v2.clear();
	int bit = (1ll << dep);
	for (int i : v) {
		if (i & bit) v1.push_back(i);
		else v2.push_back(i);
	}
	int tot1 = (int)(v1.size());
	int res = dfs(dep - 1, v1, min(tot1, lim));
	if (lim > tot1) res = res & dfs(dep - 1, v2, lim - tot1);
	cerr << res << "\n";
	return res;
}
*/
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(Suika);
	cin.tie(Suika); cout.tie(Suika);
	cin >> n >> m;
	rep(i, 1, n) cin >> a[i];
	vector<int> v, v1;
	rep(i, 1, n) v.push_back(a[i]);
	dow(t, 29, 0) {
		int bit = (1 << t);
		v1.clear();
		for (int i : v) {
			if (i & bit) v1.push_back(i);
		}
		int tot1 = (int)(v1.size());
		if (tot1 < m) continue;
		v.swap(v1);
	}
	int ans = Man;
	for (int i : v) ans = ans & i;
	cout << ans;
	return Suika;
}
/*
5 3
31 3 1 15 7
*/