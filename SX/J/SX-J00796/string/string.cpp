#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2 * 1e5+10;
ll n;
string c;
ll ans, x, q;

struct Node {
	ll l;
	string s;
} a[N];

bool cmp(Node xq, Node xw) {
	if (xq.l > xw.l)
		return true;
	else
		return false;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		cin >> a[i].l >> a[i].s;
		ans += a[i].l;
	}
	sort(a + 1, a + n + 1, cmp);
	x = a[n].l;
	c = a[n].s;
	for (int i = 1; i <= n - 1; i++) {
		if (a[i].s == c) {
			x += a[i].l;
		}
	}
	if (ans % 2 != 0) {
		if (a[(ans + x) / x].s != c) {
			cout << ans - x - a[(ans + x) / x].l - 1;
		} else {
			cout << ans - x;
		}
	} else {
		cout << ans - x;
	}
	return 0;
}