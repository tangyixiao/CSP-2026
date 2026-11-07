#include <bits/stdc++.h>
using namespace std;
int n, m, a[200010], ans = 1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			ans *= 2;
		}
		if (ans == n) {
			cout << i;
		}
	}
	return 0;
}
