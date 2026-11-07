#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)

signed main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	int n, m, x, ans = 0;
	cin >> n >> m;
	fr(i, 1, n) {
		cin >> x;
		ans = max(ans, x);
	}
	cout << ans;
	return 0;
}
