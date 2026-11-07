#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5, M = 3 * 1e5;
int n, m;
int a[N + 10], b[M + 10], d[M + 10], c[N + 10];

int main() {
//第四题纸牌游戏
	freopen("card1.in", "r", stdin);
	freopen("card1.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int q = 1; q <= n; q++) {
			c[i] = a[i];
		}
		for (int q = i; q <= n; q++) {
			for (int w = q + 1; w <= n; w++) {
				if (c[q] == c[w]) {
					for (int l = q; l < q; l++) {
						c[l] = 0;
					}
					break;
				}
			}
			for (int w = 1; w <= n; w++) {
				if (c[w] > 0) {
					d[c[w]]++;
				}
			}
			for (int w = 1; w <= m; w++) {
				if (d[w] > 0) {
					b[d[w]]++;
				}
				d[w] = 0;
			}
		}

	}
	for (int e = 1; e <= m; e++) {
		cout << b[e] << " " ;
	}
	return 0;
}
