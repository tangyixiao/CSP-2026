#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int n, m, ans;
long long a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a, a + n + 1);
	ans = a[n];
	for (int i = 1; i < m; i++) {
		ans = a[n] & a[n - i];
	}
	cout << ans;
	return 0;
}
