#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5+5;
long long n, m, a[N], maxx;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if ((a[i]&a[j]) > maxx) {
				maxx = a[i] & a[j];
			}
		}
	}
	cout << maxx;
	return 0;
}