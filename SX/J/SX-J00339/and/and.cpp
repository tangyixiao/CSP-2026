#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+5;
ll n, m, a[N], b[N], cnt;
bool vis[N];

void dfs(ll step) {
	if (step > m) {
		ll sum = b[1];
		for (int i = 2; i <= m; i++)
			sum &= b[i];
		if (cnt < sum)
			cnt = sum;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			b[step] = a[i];
			dfs(step + 1);
			vis[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	dfs(1);
	cout << cnt;
	return 0;
}
