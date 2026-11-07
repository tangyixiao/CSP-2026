#include <bits/stdc++.h>
using namespace std;
int n, m, sum[100005], x[100005], w;

int main() {
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	for (int q = 1; q <= n; q++) {
		for (int i = q; i <= n; i++) {
			w = i;
			sum[i]++;
			for (int j = w; j < i; j++) {
				if (x[i] == x[j]) {
					w = j;
					for (int k = 1; k < j; k++) {
						sum[x[k]]--;
					}
				}
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}
