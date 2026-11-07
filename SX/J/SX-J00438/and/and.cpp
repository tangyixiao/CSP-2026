#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	int n, m, a, y, max, z = -99999;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		y = m &a;
		if (y > z) {
			max = y;
		}
	}
	cout << max;
	return 0;
}
