#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
char a[N], aa[N];
int m[N], mm[N], c[N], bb[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, sum = 0;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m[i] >> a[i];
		c[i] += m[i];
		bb[i] = 0;
	}
	sum = c[n] / 2;
	int l, num = 0;
	for (int i = 1; i <= n; i++) {
		if (c[i] >= sum ) {
			l = i;
			break;
		}
	}

	int p = 0;
	for (int i = 1; i <= l; i++) {
		num += m[i];
		for (int j = n; j > l; j--) {
			if (bb[j] == 1)
				continue;
			p += m[j];
			if (a[i] == a[j]) {
				num -= m[j];
				bb[j] = 1;
				if (p >= m[i]) {
					p -= m[i];
					num += p;
					break;
				}
			}
		}
	}
	if (p > 0 && m[l + 1] != m[l])
		num += p;
	cout << num;
	return 0;
}