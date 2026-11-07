#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200010];
long long b[200010];
long long ans;

void check(int x, int y) {
	long long t = a[x];
	for (int i = x + 1; i <= y; i++) {
		t = t&&a[i];
		if (a[x - 1] == a[x]) {
			t = a[x];
		}
	}
	ans = max(ans, t);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	long long p = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		p = max(p, a[i]);
	}
	if (m == 1) {
		cout << p;
		return 0;
	}
	if (m == n) {
		int t = a[1];
		for (int i = 2; i <= n; i++) {
			t = t&&a[i];
		}
		cout << t;
		return 0;
	}
	sort(a + 1, a + n + 1);
	int l = 0, r = 1;
	while (l <= r) {
		if (r - l == m) {
			check(l, r);
		}
		if (r - l <= m && r < n)
			r++;
		else
			l++;
	}
	cout << ans;
	return 0;
}