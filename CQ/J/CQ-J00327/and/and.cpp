#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200005, P = 29;
int n, m, a[N], b[N], idx;
int main () {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	scanf ("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf ("%d", &a[i]);
	}
	for (int i = P; i >= 0; i--) {
		idx = 0;
		for (int j = 1; j <= n; j++) {
			if (a[j] & (1 << i)) {
				b[++idx] = a[j];
			}
		}
		if (idx >= m) {
			for (int j = 1; j <= idx; j++) {
				a[j] = b[j];
			}
			n = idx;
		}
	}
	int ans = a[1];
	for (int i = 2; i <= n; i++) {
		ans = ans & a[i];
	}
	printf ("%d\n", ans);
	return 0;
}
