#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], m, maxx;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j != i) {
				maxx = max(maxx, a[i] & a[j]);
			}
		}
	}
	cout << maxx;
	return 0;
}
