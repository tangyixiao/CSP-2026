#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, ans = 0;
int a[200010], v[200010];

void dfs(ll k, ll cnt) {
	if (k == m + 1) {
		ans = max(ans, cnt);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (!v[i]) {
			v[i] = 1;
			if (k == 1)
				dfs(k + 1, a[i]);
			else
				dfs(k + 1, cnt & a[i]);
			v[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1, 0);
	cout << ans;
	return 0;
}