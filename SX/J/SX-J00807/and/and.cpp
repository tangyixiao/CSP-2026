#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5+10;
long long n, m, a[N];

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long x = INT_MIN;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (a[i] && a[j] > x) {
				x = a[i] && a[j];
			}
		}
	}
	cout << x;
	return 0;
}
