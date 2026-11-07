#include <bits/stdc++.h>
using namespace std;
long long b[30];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a, d = 0, mins = 100000000;
	char c;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		b[c - 55] += a;
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] != 0) {
			d++;
			if (b[i] < mins) {
				mins = b[i];
			}
		}
	}
	if (d == 2) {
		cout << mins;
	} else {
		cout << b[1];
	}

	return 0;
}