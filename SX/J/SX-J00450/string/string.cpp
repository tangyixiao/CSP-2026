#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, ans;

struct node {
	int len;
	char c;
} a[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].len >> a[i].c;
	}
	int l = 1, r = n;
	while (l < r) {
		if (a[l].c != a[r].c) {
			int p = min(a[l].len, a[r].len);
			ans += p;
			a[l].len -= p;
			a[r].len -= p;
			if (a[l].len == 0)
				l++;
			if (a[r].len == 0)
				r--;
		} else {
			int p = min(a[l].len, a[r].len);
			a[l].len -= p;
			a[r].len -= p;
			if (a[l].len == 0)
				l++;
			if (a[r].len == 0)
				r--;
		}
	}
	cout << ans;
	return 0;
}
//Trick||Treat!