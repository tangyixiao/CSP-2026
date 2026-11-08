#include<cstdio>
#include<algorithm>
int constexpr N = 2e5 + 1;
int n, m, a[N], d, d1, d2, d3, vis[N];
int max(int a, int b) {
	return a > b ? a : b;
}
void dfs(int n, int k) {
	if(k == 0) {
		d2 = max(d2, n);
		return;
	}
	for(int i = 1;i <= n;i++) {
		if(!vis[i]) {
			if((n & a[i]) < d2) continue;
			vis[i] = 1;
			dfs(n & a[i], k - 1);
			vis[i] = 0;
		}
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i = 1;i <= n;i++) {
		scanf("%d", &a[i]);
		if(i == 1) d = a[i];
		else d &= a[i];
		d1 = max(d1, a[i]);
	}
	if(m == n) {
		printf("%d", d);
		return 0;
	}
	if(m == 1) {
		printf("%d", d1);
		return 0;
	}
	if(m == 2) {
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= n;j++) {
				if(i == j) continue;
				d3 = max(d3, a[i] & a[j]);
			}
		}
		printf("%d", d3);
		return 0;
	}
	std::sort(a + 1, a + n + 1, [&](int a, int b) -> bool {
			return a > b;
		});
	d2 = a[1];
	for(int i = 2;i <= m;i++) {
		d2 &= a[i];
	}
	for(int i = 1;i <= n;i++) {
		vis[i] = 1;
		dfs(a[i], m - 1);
		vis[i] = 0;
	}
	printf("%d", d2);
	return 0;
}
