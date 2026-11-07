#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, res1 = 0, res2 = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, greater<int>());
	if (m == 1) {
		cout << a[1] << endl;
		return 0;
	}
	int k2 = 0, k1 = 0, k3 = a[1], cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (int i = 1; i < n; ++i) {
		if (cnt1 < m) {
			if (a[i] % 2 == 0) {
				if (k1 == 0) {
					k1 = a[i];
				} else {
					k1 = k1&&a[i];
				}
				cnt1++;
			}
		}
		if (cnt2 < m) {
			if (a[i] % 2 == 1) {
				if (k2 == 0) {
					k2 = a[i];
				} else {
					k2 = k2&&a[i];
				}
				cnt2++;
			}
		}
		if (cnt3 < m) {
			k3 = k3&&a[i];
			cnt3++;
		}
	}
	res2 = max(max(k1, k2), k3);
	cout << res2;
	return 0;
}