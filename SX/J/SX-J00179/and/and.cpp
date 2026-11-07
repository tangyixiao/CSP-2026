#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
int a[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int maxx = 0, n, m;
	cin >> n >> m;
	fr(i, 1, n) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
	}
	if (m == 2) {
		int ans = 0;
		fr(i, 1, n) {
			fr(j, 1, n) {
				if (i != j) {
					ans = max(ans, a[i] & a[j]);
				}
			}
		}
		cout << ans;
		return 0;
	}
	cout << maxx;
	return 0;
}