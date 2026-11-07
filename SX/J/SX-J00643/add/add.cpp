#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("add.in", "r", stdin);
	freopen("add.out", "w", stdout);
	int n, m;
	int a[10000] = {};
	int maxn = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn = max(maxn, a[i]);
	}
	cout << maxn;
	return 0;
}