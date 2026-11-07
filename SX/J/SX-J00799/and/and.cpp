#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m;
ll a[200010];
ll r[200010];
ll ans;

long long he(int k) {
	ll h = r[1];
	for (int i = 2; i <= k; i++) {
		h = (h &r[i]);
	}
	return h;
}

void dfs(int cnt, int k) {
	for (int i = cnt + 1; i <= n; i++) {
		k++;
		r[k] = a[i];
		if (k == m) {
			ans = max(ans, he(k));
		} else {
			dfs(i, k + 1);
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	if (m <= 20) {
		for (int i = 1; i <= n; i++) {
			dfs(i, 0);
		}
		printf("%lld", ans);
	}

	return 0;
}
