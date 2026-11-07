#include <bits/stdc++.h>
using namespace std;
int n, m;
int q[1000000];
int w[200010][100];
int v[200010];
int c[200010];

bool z(int x) {
	int l = 1;
	while (q[x] > 0) {
		w[x][l] = q[x] % 2;
		q[x] /= 2;
		v[x] += 1;
		l += 1;
	}
}

int zx(int x) {
	int wei = 1000000;
	for (int i = x; i < x + m; i++) {
		wei = min(wei, v[i]);
	}
	for (int i = x + 1; i <= m + x; i++) {
		for (int i1 = 1; i1 <= wei; i1++) {
			if (i != x + 1) {
				c[i] = c[i] and w[i][i1];
			} else {
				c[i] = w[i - 1][i1] and w[i][i1];
			}
		}
	}
	int rt = 0;
	for (int i = m; i >= 1; i++) {
		rt = rt * 2 + c[i];
	}
	return rt;
}

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n >> m;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> q[i];
	}
	sort(q + 1, q + 1 + n);
	int op = 0;
	for (int i = 1; i <= n; i++) {
		z(i);
	}
	int asd = 0;
	int as = 1;
	while (1) {
		int y = zx(as);
		if (y > asd) {
			asd = y;
			as += 1;
		} else {
			cout << asd;
			break;
		}
	}
	return 0;
}