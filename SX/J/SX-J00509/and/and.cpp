#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], cnt;
int ans[6];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		if (a[i] % 2 == 1) {
			cnt++;
		}
		if ((cnt == n) || (cnt == 0)) {
			cout << a[n - m + 1];
			return 0;
		}
	}
	if (m == 1) {
		long long ma = 0;
		for (int i = 1; i <= n; i++) {
			ma = max(ma, a[i]);
		}
		cout << ma;
		return 0;
	}
	if (n <= 20) {
		for (int i = 1; i <= n; i++) {
			if (a[i] <= 1)
				ans[1]++;
			if ((a[i] <= 3) && (a[i] >= 2))
				ans[2]++;
			if ((a[i] >= 4) && (a[i] <= 15))
				ans[3]++;
			if ((a[i] >= 16) && (a[i] <= 20))
				ans[4]++;
		}
		int hao = 0;
		for (int i = 1; i <= 4; i++) {
			if (ans[i] >= m) {
				hao = i;
			}
		}
		int cmp = 0;
		for (int i = 1; i < hao; i++) {
			cmp += ans[i] + 1;
		}
		cout << a[cmp];
		return 0;
	}
	return 0;
}