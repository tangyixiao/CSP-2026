#include <bits/stdc++.h>
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int a[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, t = 1, x, maxx = -1;
	cin >> n >> m;
	int m1 = m;
	fr(i, 1, n) {
		cin >> a[i];
	}
	fr(i, 1, n - m + 1 ) {
		fr(j, t, m1) {
			x = a[j] & a[j + 1];
		}
		maxx = max(maxx, x);
		t++;
		m1++;
		if (m1 > n)
			break;

	}
	cout << maxx;
	return 0;
}