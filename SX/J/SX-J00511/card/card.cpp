#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, a[200005], sum[200005];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int b[200005];
		for (int j = 1; j <= n; j++) {
			b[j]++;
			if (b[j] > 1) {
				sum[i] += n - j;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i];
	}
	return 0;
}