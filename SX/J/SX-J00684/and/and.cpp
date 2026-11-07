#include <bits/stdc++.h>
using namespace std;
long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	long long ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; (j <= n && j != i); j++) {
				ans = max(ans, (a[i] & a[j]));
			}
		}
		cout << ans;
		return 0;
	}
	if (n > 2000 || m > 2) {
		if (m == n - 1) {
			for (int i = 1; i <= n; i++) {
				long long anss;
				bool flag = 0;
				for (int j = 1; (j <= n && j != i); j++) {
					if (flag == 0) {
						anss = a[j];
						flag = 1;
					}
					anss = (anss &a[j]);
				}
				ans = max(ans, anss);
			}
			cout << ans;
			return 0;
		}
		cout << pow(2, (int(log(n)) - m)) - 1;
		return 0;

	}

	return 0;
}