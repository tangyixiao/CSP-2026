#include <bits/stdc++.h>
using namespace std;
int n, m, a[201000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	if (m == 1)
		cout << a[n];
	else if (m == n) {
		int cnt = a[1];
		for (int i = 2; i <= n; i++)
			cnt = cnt && a[i];
		cout << cnt;
	} else if (m == 2)
		cout << a[n - 1] && a[n];
	else {
		int cnt = a[n];
		for (int i = n - 1; i >= m; i--) {
			cnt = cnt&&a[i];
		}
		cout << cnt;
	}
	return 0;
}
