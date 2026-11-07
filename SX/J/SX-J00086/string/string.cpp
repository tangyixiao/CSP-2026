#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node {
	int len;
	char nr;
} a[200005];
int n, ans;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].len >> a[i].nr;

	int l = 1, r = n;
	while (l <= r) {
		if (a[l].len == 0)
			l++;
		if (a[r].len == 0)
			r--;
		int x = a[l].len, y = a[r].len; //x最左长度,y最右长度
		if (y < x) {

			if (a[l].nr != a[r].nr)
				ans += y;
			a[l].len -= y;
			r--;
		} else if (x < y) {
			if (a[l].nr != a[r].nr)
				ans += x;
			a[r].len -= x;
			l++;
		} else {
			if (a[l].nr != a[r].nr)
				ans += x;
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}
