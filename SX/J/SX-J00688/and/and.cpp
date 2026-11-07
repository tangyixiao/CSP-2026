#include <bits/stdc++.h>
using namespace std;
int a[10000006];

int check(int x, int y) {
	return x &y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, maxx = -1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int u = check(a[i], a[i + 1]);
		maxx = max(maxx, u);
	}
	cout << maxx;
	return 0;
}
