#include <bits/stdc++.h>
using namespace std;
int n, m, a[100005], b[100005][100005], c[100005], f, maxn = 0, l;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		while (a[i] != 0) {
			b[i][++c[i]] = a[i] % 2;
			a[i] /= 2;
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; i <= c[i]; j++) {
			if (b[i][c[i]] == b[i + 1][c[i]]) {
				l++;
			}
		}
		max(maxn, l);
	}
	cout << maxn;
	return 0;
}
