#include <bits/stdc++.h>
using namespace std;
int n, m, t, d;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t > d) {
			d = t;
		}

	}
	cout << d;
	return 0;
}
