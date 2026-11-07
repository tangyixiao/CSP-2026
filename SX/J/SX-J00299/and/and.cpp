#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int a[200005], b[200005];

long long c[35] = {1};

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= 30; i++) {
		c[i] = c[i - 1] * 2;
	}
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		b[i] = lower_bound(c, c + 30, a[i]) - c;
	}
	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 1 + n);
	for (int i = n; i > n - m + 1; i--) {
		int h = abs(b[i] - b[n - m + 1]) ;
		for (int j = n; j >= n - h; j--) {
			if (a[i] >= c[j] && b[i] != b[n - m + 1]) {
				a[i] -= c[j];
			}
		}
	}
	int o = a[1];
	sort(a + 1, a + 1 + n);
	a[1] = o;
	ans = a[n];
	for (int i = n - 1; i >= n - m + 1; i--) {
		ans = a[i] & ans;
	}
	cout << ans;
	return 0;
}