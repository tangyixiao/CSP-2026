#include <bits/stdc++.h>
using namespace std;
int a[200005];

int cmp(int v, int b) {
	return v > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n, t ;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp );
	for (int i = 1; i <= m - 1; i++) {
		t = a[i] & a[i + 1];
		a[i + 1] = t;
	}
	cout << t;
	return 0;
}
