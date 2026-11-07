#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], ans;

bool cmd(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n, cmd);
	ans = a[1];
	for (int i = 1; i <= m; i++)
		ans &= a[i];
	cout << ans;
	return 0;
}
