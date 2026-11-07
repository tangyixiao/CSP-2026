#include <bits/stdc++.h>
using namespace std;
int a[200009];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, i, j, cnt, maxx = INT_MIN;
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
		if (i == 1)
			cnt = a[i];
		else
			cnt = (cnt & a[i]);
		if (a[i] > maxx)
			maxx = a[i];
	}
	if (n == m) {
		cout << cnt;
		return 0;
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	if (n <= 2000 && m == 2) {
		maxx = INT_MIN;
		for (i = 1; i <= n; i++) {
			for (j = i + 1; j <= n; j++) {
				if ((a[i]&a[j]) > maxx)
					maxx = (a[i] & a[j]);
			}
		}
		cout << maxx;
		return 0;
	}
	sort(a + 1, a + n + 1, greater<int>());
	cout << a[m];
	return 0;
}
