#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], sum, x, d, id1, id2;

void dfs(int k, int cnt, long long ans) {
	if (k == m) {
		sum = max(sum, ans);
		return ;
	} else if (cnt == n) {
		return ;
	}
	for (int i = 1; i <= 2; i++) {
		if (i == 1)
			dfs(k, cnt + 1, ans);
		if (i == 2)
			dfs(k + 1, cnt + 1, ans & a[cnt]);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		d = 0;
		cin >> a[i];
		x = a[i] + 1;
		for (int j = 1; x > 0; j++) {
			if (x % 2 == 1)
				d++;
			x /= 2;
		}
		if (d == 1)
			id1++;
		if (a[i] == i - 1)
			id2++;
	}
	x = n;
	for (int j = 1; x > 0; j++) {
		if (x % 2 == 1)
			d++;
		x /= 2;
	}
	if (d == 1)
		id2++;
	sort(a + 1, a + n + 1);
	if (id1 == n) {
		cout << a[n - m + 1];
		return 0;
	} else if (id2 == n + 1) {
		if (m > n / 2) {
			cout << 0 << endl;
		} else {
			cout << n / 2 << endl;
		}
	}
	dfs(0, 1, pow(2, 31) - 1);
	cout << sum << endl;
	return 0;
}
