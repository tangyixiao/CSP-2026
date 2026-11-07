#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200010], ans, ansl = INT_MAX, s[35], q[200010];
bool f[1048580];

void dfs(int x, int k) {
	for (int i = k; i <= n; i++) {
		if (f[a[i]] == true)
			continue;
		q[x] = a[i];
		if (x == m) {
			ansl &= q[m];
			ans = max(ansl, ans);
		}
		f[a[i]] = true;
		dfs(x + 1, i);
		f[a[i]] = false;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	s[0] = 1;
	for (int i = 1; i <= 30; i++) {
		s[i] = s[i - 1] * 2;
	}
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + 1 + n, greater<int>());
	if (m == 1) {
		printf("%lld\n", a[1]);
		return 0;
	}
	dfs(1, 1);
	printf("%lld\n", ans);
	return 0;
}
