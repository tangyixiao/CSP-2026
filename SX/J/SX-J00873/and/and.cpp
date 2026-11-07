#include <bits/stdc++.h>
using namespace std;
long long n, m, a[10005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n;
	int max;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int i = 1; i <= m; i++) {
			max = a[i] and a[i + 1];

		}
	}
	cout << max;
	return 0;
}
