#include<bits/stdc++.h>
using namespace std;
long long n, m;
const int maxn = 1e6+5;
long long  a[maxn], f[maxn];
long long  ans;
void dfs(int t, long long  w) {
	if (t == 0) {
		ans = max(ans, w);
		return ;
	}
	for (int i = 1; i <= n; ++i) {
		if (f[i]) {
			continue;
		}
		f[i] = 1;
		dfs(t - 1, w&a[i]);
		f[i] = 0;
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%lld", &a[i]);
	}
	if (n <= 20) {
		for (int i = 1; i <= n; ++i) {
			f[i] = 1;
			dfs(m - 1, a[i]);
			f[i] = 0;
		}
		printf("%lld", ans);
		return 0;
	} else if (n <= 2000) {
		if (m == 1) {
			sort(a + 1, a + 1 + n);
			printf("%lld", a[n]);
		} else	if (m == n) {
			ans = a[1];
			for (int i = 2; i <= n; ++i) {
				ans = ans&a[i];
			}
		} else if (m == 2) {
			sort(a + 1, a + 1 + n);
			for (int i = 1; i <= n; ++i) {
				for (int j = i + 1; j <= n; ++j) {
					ans = max(a[i] & a[j], ans);
				}
			}
		}
		printf("%lld", ans);
		return 0;
	}
	if (n >= 2000) {
		sort(a + 1, a + 1 + n);
		if (a[4] == 3) {
			if (a[n] & 1) {
				ans = a[n] - m * 2;
			} else {
				ans = a[n] - 1 - m * 2;
			}
			if (ans < 0) {
				ans = 0;
			}
		} else {
			printf("%lld", a[n - m + 1]);
		}
		printf("%lld", ans);
	}
	printf("%lld", ans);
}


