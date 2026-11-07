#include <bits/stdc++.h>
#define int long long
using namespace std;
int maxx = INT_MIN, f, n, m, a[100005];

int g(int x) {
	f = a[x];
	for (int i = x; i < x + m ; i++) {

	}
	return f;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - m + 1 ; i++) {
		maxx = max(maxx, g(i));
	}
	cout << endl << maxx;
	return 0;
}
