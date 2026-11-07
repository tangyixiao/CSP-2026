#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and", "r", stdin);
	freopen("and", "w", stdout);
	int n, m, q, p = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> q;
		p += q;
	}
	cout << p / m - 12;
	return 0;
}