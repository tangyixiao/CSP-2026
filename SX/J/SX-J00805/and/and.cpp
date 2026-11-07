#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
ll n, m, a[N], ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + 1 + n, greater<int>() );
	ll l = 1, cnt = a[1];
	for (int i = 1; i <= n; i++) {
		cnt = (cnt &a[i]);
//		cout << cnt << ' ';
		if (i - l + 1 == m) {
			ans = max(ans, cnt);
			cnt = (cnt ^a[i]);
//			cout << cnt << ' ';
			l++;
		}
	}
	cout << ans;
//	cout << ((512 & 511 ) ^ 511);
	return 0;
}
