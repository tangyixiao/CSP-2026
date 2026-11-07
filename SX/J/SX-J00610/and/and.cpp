#include <bits/stdc++.h>
using namespace std;
int a[200010];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	int c = a[1];
	for (int i = 1; i <= m; i++) {
		c &= a[i];
	}
	cout << c;
	return 0;
}