#include <bits/stdc++.h>
using namespace std;
int a[1000000][10000];
int b[10000], c[10000], d[10000];
int mx, w, n, m, s;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		s = c[i];
		w = 0;
		while (s != 0) {
			if (s % 2 != 0) {
				a[i][w] = 1;
			}
			s = s / 2;
			w++;
		}
		mx = max(mx, w + 1);
	}
	for (int v = mx; v >= 0; v--) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (a[j][v] == 1 && b[j] == 0) {
				sum++;
			} else {
				b[j] = 1;
			}
		}
		if (sum == m) {
			break;
		} else if (sum < m) {
			for (int i = 0; i < n; i++) {
				b[i] = d[i];
			}
		} else {
			for (int i = 0; i < n; i++) {
				d[i] = b[i];
			}
		}
	}
	int sad;
	for (int i = 0; i < n; i++) {
		if (b[i] == 0 && sad == 0) {
			sad = c[i];
		} else if (b[i] == 0) {
			sad = sad &c[i];
		}
	}
	cout << sad;
	return 0;
}
