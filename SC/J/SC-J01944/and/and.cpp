#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int a[N], n, m, ans2, b[N], cntb, ma2 = -1;
void dfs(int l, int cnt) {
	if (n - l < m - cnt)return ;
	if (l + 1 > n) {
		if (cnt == m) {
			ma2 = b[1];
			for (int i = 2; i <= cntb; i++) {
				ma2 &= b[i];
			}
			ans2 = max(ans2, ma2);
		}
		return;
	}
	dfs(l + 1, cnt);
	b[++cntb] = a[l + 1];
	dfs(l + 1, cnt + 1);
	b[cntb--] = 0;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int ma = -1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ma = max(ma, a[i]);
	}
	if (m == 1) {
		cout << ma;
		return 0;
	}
	if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	else {
		dfs(0, 0);
		cout << ans2;
	}
	return 0;
}