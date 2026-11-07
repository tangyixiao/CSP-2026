#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+5;
ll n, m, a[N];
ll b[N];
bool vis[N];
ll mmax;

void dfs(ll step) {
	if (step + 1 > m + 1) {
		ll ans = a[b[1]];
		for (int i = 2; i <= m; i++)
			ans = ans & a[b[i]];
		mmax = max(mmax, ans);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			b[step] = i;
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
	dfs(1);
	cout << mmax;
	return 0;
}
