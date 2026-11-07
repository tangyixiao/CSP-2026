#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+100;
int n, m;
int a[N], b[N], d[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int k = 1;
		for (int j = i; j <= n; j++, k++) {
			for (int g = 1; g < k; g++) {
				if (a[j] == d[g]) {
					k = g;
					break;
				}
			}
			d[k] = a[j];
		}
		for (int j = 1; j <= k; j++) {
			b[d[j]]++;
		}
		for (int j = 1; j <= k; j++) {
			d[j] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
