#include <bits/stdc++.h>
using namespace std;
int a[500005], c[500005], ct[300005];
int n, m;
int bk;

void na(int x) {
	for (int i = x; i <= bk; i++) {
		c[i] = 0;
	}
}

int fd(int x) {
	for (int i = 0; i < n; i++) {
		if (c[i] == x)
			return i;
	}
	return -1;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			c[j] = a[j];
		}
		bk = n - 1;
		for (int j = i; j < n; j++) {
			int w = fd(a[j]);
			if (w >= 0) {
				na(w);
				c[w] = a[j];
				bk = w;
			} else {
				c[bk + 1] = a[j];
				bk++;
			}
		}
		for (int j = 0; j < n; j++) {
			if (c[j] != 0) {
				ct[c[j]]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ct[i] << ' ';
	}
	return 0;
}
