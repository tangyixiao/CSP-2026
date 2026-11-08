#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m, a[200010], f[200010], c[200010], sum, cnt, ans;
bool okk;

inline bool check(int x) {
	for (int i = 1; i <= n; i++)
		c[i] = a[i];
	sum = n;
	for (int j = 0; (x >> j); j++) {
		if (((x >> j) & 1) == 0) continue;
		for (int i = 1; i <= n; i++) {
			if (c[i] == -1) continue;
			if (((c[i] >> j) & 1) == 0)
				c[i] = -1, sum--;
			if (sum < m)
				return false;
		}
	}
	int res = -1;
	for (int i = 1; i <= n; i++) {
		if (c[i] == -1) continue;
		if (res == -1) res = c[i];
		else res = (res & c[i]);
	}
	return (res == x && sum >= m); 
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%lld", &a[i]), cnt = max(cnt, a[i]);
	okk = true;
	for (int i = 1; i <= n && okk; i++) {
		bool ok = false;
		for (int j = 0; j <= 30 && !ok; j++)
			if (((1 << j) - 1) == a[i])
				ok = true;
		if (!ok)
			okk = false;
	}
	sort(a + 1, a + n + 1);
	if (okk) {
		printf("%lld\n", a[n - m + 1]);
		return 0;
	}
	if (cnt <= 4) {
		for (int i = cnt; i >= 0; i--)
			if (check(i)) {
				printf("%d\n", i);
				break;
			}
		return 0;
	}
	if (m == n - 1) {
		ans = a[2];
		for (int i = 3; i <= n; i++)
			ans = (ans & a[i]);
		printf("%lld\n", ans);
		return 0;
	}
	f[1] = a[1];
	for (int i = 2; i <= n; i++) {
		for (int j = min(i, m); j > 1; j--)
			f[j] = max(f[j - 1] & a[i], f[j]);
		f[1] = max(f[1], a[i]);
	}
	printf("%lld\n", f[m]);
	return 0;
}
