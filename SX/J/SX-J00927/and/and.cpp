#include <bits/stdc++.h>
using namespace std;

long long n, m, a[200000], maxx = 0;

int main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
	}
	if (m == 1) {
		cout << maxx;
	} else if (m == 2) {
		maxx = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxx = max(maxx, a[i] & a[j]);
			}
		}
		cout << maxx;
	} else {
		sort(a + 1, a + n + 1);
		cout << a[(n + 1) / 2];
	}
	return 0;
}
//and
