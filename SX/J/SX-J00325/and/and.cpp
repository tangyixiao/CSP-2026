#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, maxn = 0;
	cin >> n >> m;
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i]&a[j] >= maxn)
				maxn = a[i] & a[j];
		}
	}
	cout << maxn;
	return 0;
}
