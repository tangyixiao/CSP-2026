#include <bits/stdc++.h>
using namespace std;
long long a[1000000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	int cnt = -1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, greater<int>());
	for (int i = 1; i <= m; i++) {
		cnt &= a[i];
	}
	cout << cnt;
	return 0;
}
