#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "a", stdin);
	freopen("and.out", "a", stdout);
	int n, m, a, b, ans = 0;
	cin >> n >> m;
	int x[n + 1];
	string y[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i < n; i++) {
		string t = "";
		while (x[i] != 0) {
			t += x[i] % 2;
			x[i] /= 2;
		}
	}
	cout << x[n  - 1];
	cout << 1;
	return 0;
}
