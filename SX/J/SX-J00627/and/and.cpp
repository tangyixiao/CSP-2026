#include <bits/stdc++.h>
using namespace std;

int a[200005], n, m, cnt = 1;

bool cmp(int p, int q) {
	return p > q;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	cout << a[m];



	return 0;
}