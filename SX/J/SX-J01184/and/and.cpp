#include <bits/stdc++.h>
using namespace std;
int n, x, a[50010], maxxx = -1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> x;
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= n; i++) {
		maxxx = max(maxxx, a[i] & a[i - 1]);
	}
	cout << maxxx;
	return 0;
}