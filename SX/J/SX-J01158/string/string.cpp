#include <bits/stdc++.h>
using namespace std;
char s[1996271199];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, m, z = 0, l, r, sum = 0;
	cin >> n;
	char a;
	for (int i = 1; i <= n; i++) {
		cin >> m >> a;
		for (long long j = z + 1; j <= z + m; j++) {
			s[j] = a;
		}
		z += m;
	}
	if (z % 2 == 0) {
		l = z / 2;
		r = l + 1;
	} else {
		l = z / 2;
		r = l + 2;
	}
	for (long long b = 0; b < (z / 2); b++) {
		if (s[l - b] != s[r + b]) {
			sum++;
		}

	}
	cout << sum;
	return 0;
}
