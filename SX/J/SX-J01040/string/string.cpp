#include <bits/stdc++.h>
using namespace std;
long long n, m;
string a;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> m >> a;
	}
	if (n == 1) {
		cout << 0;
		return 0;
	}
	if (n % 2 == 0) {
		cout << n - 1;
	} else {
		cout << n - 2;
	}
	return 0;
}
