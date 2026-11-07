#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m;
int a[N], dp[N];
string x[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		while (a[i]) {
			if (a[i] % 2 == 1) {
				x[i] += '1';
				a[i] /= 2;
			} else {
				x[i] += '0';
				a[i] /= 2;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j < (i + m - 1); j++) {

		}
	}
	return 0;
}