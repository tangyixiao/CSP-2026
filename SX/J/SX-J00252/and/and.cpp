#include <bits/stdc++.h>
using namespace std;
int a[200005];

bool cmp(int x, int b) {
	if (x % 2 != b % 2)
		return x > b;
	else
		return x > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		cout << 0;
		return 0;
	}
	if (m == n) {
		int x = 1;
		for (int i = 1; i <= n; i++) {
			x = x &a[i] ;
		}
		cout << x;
		return 0;
	}
	sort(a + 1, a + n + 1, cmp);
	int x = 1;
	for (int i = 1; i < m; i++) {
		x = x &a[i];
	}
	cout << x;
	return 0;
}