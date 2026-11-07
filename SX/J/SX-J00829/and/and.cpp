#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[200005];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
		return 0;
	} else if (m == 2) {
		sort(a + 1, a + n + 1);
		int maxx = 0;
		for (int i = n; i >= 1; i--) {
			for (int j = n; j >= 1; j--) {
				if (i != j) {
					if ((a[i] & a[j] ) > maxx) {
						maxx = (a[i] & a[j]);
					}
				}
			}
		}
		cout << maxx;
		return 0;
	} else if (m == n) {
		int cnt = a[1];
		for (int i = 2; i <= n; i++) {
			cnt = (cnt &a[i]);
		}
		cout << cnt;
		return 0;
	} else {
		sort(a + 1, a + n + 1);
		int cnt = a[n];
		int c = 1;
		for (int i = n - 1; i >= 1; i--) {
			if (c == m)
				break;
			cnt = (cnt &a[i]);
			c++;
		}
		cout << cnt;
	}
	return 0;
}