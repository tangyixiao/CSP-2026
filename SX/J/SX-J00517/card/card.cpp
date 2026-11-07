#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int n, m, a[N], t[M], d[M], x[M], b[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			t[a[j]]++;
			if (t[a[j]] == 2) {
				for (int k = x[a[j]]; k <= n; k++) {
					t[d[k]]--;
					d[k] = 0;
				}
			}
			d[j] = a[j];
			x[a[j]] = j;
		}
		for (int j = 1; j <= m; j++) {
			if (t[j])
				b[j]++;
		}
		memset(d, 0, sizeof d);
		memset(t, 0, sizeof t);
		memset(x, 0, sizeof x);
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
