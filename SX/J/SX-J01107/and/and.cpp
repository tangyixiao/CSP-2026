#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[2005];
char eja[2005][200005];
int j[2005];
int ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	/*for (int i = 1; i <= n; i++) {
		while (a[i]) {
			eja[a[i]][++j[a[i]]] = a[i] % 2;
			a[i] /= 2;
		}
	}*/
	sort(a + 1, a + n + 1);
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	if (m == 2) {
		int ej[200005];
		if (j[a[n]] < j[a[n - 1]]) {
			swap(j[a[n]], j[a[n - 1]]);
		}
		for (int i = j[a[n]]; i >= 1; i--) {
			if (eja[a[n]][i] == eja[a[n - 1]][i]) {
				ej[i] = 1;
			} else {
				ej[i] = 0;
			}
		}
		int sq2 = 1;
		for (int i = 1; i <= j[a[n]]; i++) {
			ans += ej[i] * sq2;
			sq2 *= 2;
		}
	}
	cout << ans;
	return 0;
}