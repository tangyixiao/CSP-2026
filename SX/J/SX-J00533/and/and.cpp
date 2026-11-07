#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, x, a[2005];
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	sort(a + 1, a + n + 1);
	int sum = a[n];
	for (int i = n - 1; i >= n - x; i++) {
		sum = (sum &a[i]);
	}
	cout << sum;
	return 0;
}
