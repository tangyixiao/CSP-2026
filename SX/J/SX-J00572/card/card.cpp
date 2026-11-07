#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	string s;
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int b[n], c = 0, sum[m];
	for (int i = 0; i < m; i++) {
		sum[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) {
			c = 0;
			b[c] = a[j];
			c++;
			if (c > 1) {
				for (int k = 0; k < c; k++) {
					if (b[c] == b[k]) {
						int h = c;
						c = k;
						for (int l = c; l < h; l++) {
							b[l] = 0;
						}
					}
				}
			}

		}
		for (int j = 0; j < c; j++) {
			s += b[i];
		}
		int d;
		d += c;
		for (int j = 0; j < d; j++) {
			if (s[j] == b[j]) {
				sum[s[j]]++;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << sum[i];
	}
}
