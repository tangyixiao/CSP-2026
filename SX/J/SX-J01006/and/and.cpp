#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int n, m;
long long b[N];
long long ans = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	sort(b + 1, b + 1 + n, greater<int>());
	ans = b[1];
	for (int i = 2; i <= m; i++) {
		ans &= b[i];
	}
	cout << ans << '\n';
	return 0;
}
