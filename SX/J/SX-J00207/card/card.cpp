#include <bits/stdc++.h>
using namespace std;
int a[1000000], b[1000000], sum[1000000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		for (int j = i; j <= m; j++) {
			if (b[a[j]] != 0) {
				for (int w = b[a[j]]; w <= j; w++) {
					b[a[w]] = 0;
				}
				b[a[j]] = 0;
			}
			b[a[j]] = j;
		}
		for (int j = 1; j <= n; j++) {
			if (b[j] != 0) {
				b[j] = 0;
				sum[j]++;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}
