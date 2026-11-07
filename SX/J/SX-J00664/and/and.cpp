#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 4e5+66;
ll n, m, a[N], ans, ma;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ma = max(ma, a[i]);
	}
	sort(a + 1, a + n + 1, greater<int>() );
//	for (int i = 1; i <= n; i++) {
//		cout << a[i] << ' ';
//	}
	int k = 1;
	for (int i = 1; i <= n; i++) {
		int x = pow(2, i);
		if (x == a[k])
			k++, i = 1;
	}
	ans = a[k];
	for (int j = k + 1; j <= m + k - 1; j++) {
		ans = ans &a[j];
	}
	cout << ans;
	return 0;
}
