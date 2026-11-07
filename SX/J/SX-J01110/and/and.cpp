#include <bits/stdc++.h>
using namespace std;


bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("answer.in", "r", stdin);
	freopen("answer.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	unsigned int a[n + 5];
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	int res = a[1];
	for (int i = 2; i <= m; i ++) {
		res = res &a[i];
	}
	cout << res;
	return 0;
}
