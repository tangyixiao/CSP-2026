#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
ll n, m, ans, big = INT_MIN;
ll a[N], r[N];

void dfs(int k, int t) {
	for (int i = t; i <= n; i++) {
		r[k] = a[i];
		if (k == m) {
			ans = r[1];
			for (int j = 2; j <= m; j++) {
				ans &= r[j];
			}
			big = max(big, ans);
		} else {
			dfs(k + 1, i + 1);
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
	if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans &= a[i];
		}
		printf("%lld", ans);
		return 0;
	}
	dfs(1, 1);
	printf("%lld", big);
	return 0;
}