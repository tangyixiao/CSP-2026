#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
ull ans;
ll n, l, r;

struct node {
	ll l;
	char c;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i].l >> a[i].c;
	}
	l = 1;
	r = n;
	while (l < r) {
		ll mi = min(a[l].l, a[r].l);
		if (a[l].c != a[r].c)
			ans += mi;
		a[l].l -= mi;
		a[r].l -= mi;
		if (a[l].l == 0)
			l++;
		if (a[r].l == 0)
			r--;
	}
	cout << ans;
	return 0;
}
