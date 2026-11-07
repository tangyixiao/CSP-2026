#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pii pair<int,int>
const int N = 5e5+5;
int n, a[N], c[N], ans;

void f(int x, int y) {
	a[x] -= a[y];
	if (c[x] != c[y])
		ans += a[y];
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char ch;
		cin >> a[i] >> ch;
		c[i] = ch - 'a';
	}
	int l = 1, r = n;
	int bl = 0;
	while (l < r) {
		if (!bl) {
			if (a[r] <= a[l])
				f(l, r), r--;
			else
				f(r, l), l++, bl = 1;
		} else {
			if (a[l] <= a[r])
				f(r, l), l++;
			else
				f(l, r), r--, bl = 0;
		}
//		cout << ans << ' ' << l << ' ' << r << ' ' << a[l] << ' ' << a[r] << '\n';
	}
	cout << ans;
	return 0;
}
/*
2
2 a
3 a

*/
