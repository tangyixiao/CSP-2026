#include <bits/stdc++.h>
using namespace std;
int n, m, a[500010], b[500010], c[300010];

int findx(int x, int i, int j) {
	for (int k = i; k <= j; k++) {
		if (b[k] == x) {
			return k;
		}
	}
	return -1;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int l = 0;
	for (int i = 1; i <= n; i++) {
		memset (b, 0, sizeof(b));
		l = 0;
		for (int j = i; j <= n; j++) {
			int f = findx(a[j], 1, l);
			if (f != -1) {
				for (int k = f; k <= l; k++)
					b[k] = 0;
				l = f;
				b[l] = a[j];
			} else {
				b[++l] = a[j];
			}
		}

		for (int j = 1; j <= l; j++)
			c[b[j]]++;
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
}