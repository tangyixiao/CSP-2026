#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long a[N][100];
long long ans[100];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i][100];
		while (a[i][100] > 0) {
			a[i][++a[i][0]] = a[i][100] % 2;
			a[i][100] = a[i][100] / 2;
		}
		a[i][0] = 0;
	}
	long long s;
	for (int i = 31; i >= 1; i--) {
		s = 0;
		for (int j = 1; j <= n; j++) {
			if (a[j][0] == 1)
				continue;
			if (a[j][i] == 1)
				s++;
		}
		if (s >= m) {
			ans[i] = 1;
			for (int j = 1; j <= n; j++) {
				if (a[j][i] == 0) {
					a[j][0] = 1;
				}
			}
		}
	}
	long long anss = 0;
	for (int i = 1; i <= 31; i++) {
		anss = anss + ans[i] * pow(2, i - 1);
	}
	cout << anss;
	return 0;
}