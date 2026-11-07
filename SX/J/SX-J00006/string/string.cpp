#include <bits/stdc++.h>
using namespace std;

long long b[300000] = {};

char g[300000] = {};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;

	long long zs = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		cin >> g[i];
		zs += b[i];
	}
	long long j = 1, k = n, lj = 0;
	while (zs > 0) {
		long long bb = min(b[j], b[k]);
		if (j > k || j == k)
			break;
		if (g[j] != g[k]) {
			lj += bb;
		}
		b[j] -= bb;
		b[k] -= bb;
		zs -= bb;
		if (b[j] == 0) {
			j++;
		}
		if (b[k] == 0) {
			k--;
		}
	}
	cout << lj << endl;
	return 0;
}