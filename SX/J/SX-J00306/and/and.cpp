#include <bits/stdc++.h>
using namespace std;
int a[200005], b[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = n  ; i > n - m ; i--) {
		b[n - i + 1] = a[i];
	}
	cout << b[m];
	return 0;
}
