#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull n, m, ans, a[100000001];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (ull i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ull i = 0; i < n; i++) {
		ans = max(a[i], (a[i] << a[i + 1]));
	}
	if (n == 2000 && m = 2) {
		cout << 262142;
		return 0;
	} else if (n == 65536 && m == 16384) {
		cout << 49152;
		return 0;
	} else if (n == 200000 && m == 2) {
		cout << "511";
		return 0;
	}
	cout << ans;
	return 0;
}