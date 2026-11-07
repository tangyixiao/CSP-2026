#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	int tong[m + 10] = {}, a[n + 10] = {};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1 ; i <= n; i++) {
		int p[n + 10] = {};
		for (int j = i; j <= n; j++) {
			p[j] = a[j];
			for (int t = 1; t <= j; t++) {
				if (p[j] == p[t]) {
					for (int x = t + 1; x <= j; t++) {
						p[t] = 0;
					}
				}
			}
		}
		for (int j = i; j <= n; j++) {
			tong[p[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << tong[i] << ' ';
	}
	return 0;
}
