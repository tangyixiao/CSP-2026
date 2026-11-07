#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN], v[MAXN];
void dfs(int pos, int ans) {
	if(pos == 0) {
		cout << ans;
		return;
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++) if(v[i] == 0) if(a[i] & pos) cnt++;
	if(cnt < m) {
		dfs(pos / 2, ans);
		return;
	}
	for(int i = 1; i <= n; i++) {
		if(v[i] == 1) continue;
		if(!(a[i] & pos)) v[i] = 1;
	}
	dfs(pos / 2, ans + pos);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	dfs(pow(2, 29), 0);
	return 0;
}
