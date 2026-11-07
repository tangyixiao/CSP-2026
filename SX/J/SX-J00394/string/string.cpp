#include <bits/stdc++.h>
using namespace std;
long long  n;
int ans, cnt, sum;

int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long a[n + 1], b = 0;
	string c[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		b += a[i];
	}
	for (int i = 2; i <= n; i++) {
		if (c[i - 1] != c[i])
			ans = 1;
	}
	if (ans == 0) {
		cout << 0;
	} else {
		cout << b / 2;
	}
	return 0;
}
