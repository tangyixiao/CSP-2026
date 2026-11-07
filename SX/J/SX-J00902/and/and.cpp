#include <bits/stdc++.h>
using namespace std;
int a[200005], b[25], a1[200005];

bool cmp1(int a, int b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, x, f = 1, sum = 0, max1, cmp = 0, sum1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a1[i] = a[i];
	}
	if (m == 1) {
		max1 = a[1];
		for (int i = 2; i <= n; i++) {
			if (a[i] > max1)
				max1 = a[i];
		}
		cout << max1;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] % 2 == 1) {
			x = a[i] + 1;
			while (x > 1) {
				x /=  2;
				if (x % 2 == 1) {
					f = 0;
				}
			}
			if (f != 0) {
				sum++;
				b[sum] = a[i];
			}
		}
	}
	sort(a1 + 1, a1 + 1 + n, cmp1);
	m += 1;
	while (m--) {
		cmp++;
		if (cmp == 1) {
			sum1 += b[sum] ^ a1[1];
		} else
			sum1 = sum1 ^ a1[cmp];
	}
	cout << sum1;
	return 0;
}
