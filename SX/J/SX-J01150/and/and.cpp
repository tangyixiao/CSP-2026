#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
long long n, m, a[N], b[N], mn;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		b[i] = a[i] % 2 / 10;
		mn = max(mn, b[i]);
	}
	cout << mn << endl;
	return 0;
}
