#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int n, m;
long long maxx, num;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		if (i == 1) {
			maxx = a[i];
			num = a[i];
		} else {
			maxx = max(maxx, a[i]);
			num = num &a[i];
		}
	}
	if (m == 1) {
		cout << maxx;
	} else if (m == n) {
		cout << num;
	} else if (m == 2) {
		maxx = a[1] & a[2];
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j < n; j++) {
				maxx = max(maxx, a[i] & a[j]);
			}
		}
		cout << maxx;
	}

	return 0;
}