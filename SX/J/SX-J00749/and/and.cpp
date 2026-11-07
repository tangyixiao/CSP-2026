#include <bits/stdc++.h>
using namespace std;
int a[200005];


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		int maxx = -1;
		for (int i = 1; i <= n; i++)
			maxx = max(maxx, a[i]);
		cout << maxx;
	} else if (m == 2) {
		int maxx = -1;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxx = max((a[i] & a[j]), maxx);
			}
		}
		cout << maxx;
	} else if (m == n) {
		int maxx = a[1];
		for (int i = 2; i <= n; i++) {
			maxx = maxx &a[i];
		}
		cout << maxx;
	} else {
		int maxx = -1;
		for (int i = 1; i <= n; i++) {
			int x = a[1];
			if (i == 1) {
				x = a[2];
				for (int j = 1; j <= n; j++) {
					if (j == i)
						continue;
					x = x &a[j];
				}
			} else {
				for (int j = 1; j <= n; j++) {
					if (j == i)
						continue;
					x = x &a[j];
				}
			}
			maxx = max(maxx, x);
		}
		cout << maxx;
	}
	return 0;
}