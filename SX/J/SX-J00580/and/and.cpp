#include <bits/stdc++.h>
using namespace std;
int n, m;
const int n1 = 2 * 1e5;
int a[n1];

int solve(int x, int j, int sam) {
	sam = (sam &a[x]);
	if (j == m) {
		return sam;
	}
	solve(x - 1, j + 1, sam);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	int sum = 0;
	for (int i = n - 1; i >= m - 1; i--) {
		int v = solve(i -  1, 2, a[i]);
		if (v > sum) {
			sum = v;
		}
		if (v > a[i - m]) {
			break;
		}
	}
	cout << sum;
	return 0;
}
