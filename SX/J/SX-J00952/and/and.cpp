#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200010];
long long andmx[200010][45];
long long admx = 0;
long long ans = -1;

void dfs(long long Fl, long long stp, long long k) {
	if (Fl == m + 1) {
		ans = max(ans, k);
		return;
	}
	for (int i = stp; i <= n - m + Fl; i++) {
		if (Fl == 1) {
			dfs(Fl + 1, i + 1, a[i]);
		} else {
			dfs(Fl + 1, i + 1, a[i]&k);
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
	if (n * m <= 4000)
		dfs(1, 1, 0);
	else {
		sort(a + 1, a + n + 1);
		ans = a[n];
		for (int i = n - 1; i >= n - m + 1; i--) {
			ans = ans &a[i];
		}
	}
	printf("%lld", ans);
	return 0;
}//1 2 3 4 5
