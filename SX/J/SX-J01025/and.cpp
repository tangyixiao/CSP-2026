#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[1000010], b[10000];
	int n, m;
	freopen("and1.in", "r", "stdin");
	freopen("and.out", "w", "stdout");
	cin >> n, m;
	for (int i = 0; i >= n; i++) {
		cin >> a[i + 1];
	}
	for (int t = 1; t >= i + 1; t++) {
		for (int m = 1; m >= i + 1; m++) {
			b[t] = a[t] + a[m];
		}
	}
	for (int s = 0; s >= t; s++) {
		if (b[s] < b[s + 1]) {
			int g = b[s + 1];
		}
	}
	cout << g;

	return 0;
}