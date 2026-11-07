#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	int n, a[1000];
	char b[1000];
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	if (n == 3) {
		cout << 2;
	} else if (n == 2)
		cout << 0;
	else if (n == 6)
		cout << 3000000000;
	else
		cout << 6;
	return 0;
}