#include <bits/stdc++.h>
using namespace std;
int a[200001];
int b[200001];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, max = 0, ans = 0;
	cin >> n, m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	if (a[1] == 0) {
		cout << 0;
		return 0;
	}
	int y = 0;
	for (int i = 1; i <= n; i++) {
		int q = -1;
		u = a[i];
		while (u > 0) {
			u >> 1;
			q++;
		}
		y = max(y, q)
		if (b[q] == 0) {
			b[q] = i;
		}
	}
	for (int i = y; i >= 0; i--) {
		if (b[i] >= m) {
			ans += (1 >> i + 1);
		} else {
			for (int j = a[b[i]]; j <= a[i - 1] + 1) {
				while ()
				}

		}
	}
	return 0;
}