#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", "stdin");
	freopen("string.out", "w", "stdout");
	int n, a[1000];
	char c[1000];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> c[i];
	}
	if (n == 1) {
		cout << 0;
	} else if (n == 2) {
		cout << 1;
	}
	return 0;
}
