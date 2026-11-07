#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	int a, sum = 0, g1 = 0, x[100];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		x[i] = a;
		if (m == 2) {
			cout << x[1]&&x[2];
		}
		if (m == 3) {
			cout << x[1]&&x[2]&&x[3];
		}
		if (m == 4) {
			cout << x[1]&&x[2]&&x[3]&&x[4];
		}
		return 0;
	}
}
