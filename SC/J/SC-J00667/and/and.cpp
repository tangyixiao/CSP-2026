#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n, m, a[N];
ll cnt, ans;
ll rec[N], vis[N];
ll query() {
	int sum = rec[1];
	for (int i = 2; i <= m; i++)
		sum &= rec[i];
	return sum;
}
void dfs(int k) {
	if (k == m) {
		ans = max(ans, query());
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			rec[k + 1] = a[i];
			vis[i] = 1;
		} else continue;
		dfs(k + 1);
		vis[i] = 0;
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	bool flag = 1, ch = 1;
	cin >> a[1];
	cnt = a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		if (a[i] != i - 1) flag = 0;
		if (a[i] != 4) ch = 0;
		cnt &= a[i];
	}
	sort(a + 1, a + 1 + n);
	if (flag) {
		cout << a[n - m];
		return 0;
	}
	if (m == n) {
		cout << cnt;
		return 0;
	}
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	if (m == 2) {
		ll ans2 = -1;
		for (int i = 1; i <= n; i++) {
			ll akioi = a[i];
			for (int j = i + 1; j <= n; j++) {
				akioi &= a[j];
				ans2 = max(ans2, akioi);
			}
		}
		cout << ans2;
		return 0;
	}
	if (ch) {
		cout << "4";
		return 0;
	} else {
		cout << "0";
		return 0;
	}
	dfs(0);
	cout << ans;
	return 0;
}