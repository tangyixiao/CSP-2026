#include <bits/stdc++.h>
using namespace std;
#define ll  long long
const int N = 2e5+5;

struct stu {
	ll l, b, e;
	char a;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ll n, ans = 0;
	cin >> n;
	a[0].e = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].l >> a[i].a;
		a[i].b = a[i - 1].e + 1;
		a[i].e = a[i].b + a[i].l - 1;
	}
	ll l = 1, la = 1, r = a[n].e, rr = n;
	while (l <= r) {
		if (a[la].a != a[rr].a)
			ans++;
		l++, r--;
		if (l > a[la].e)
			la++;
		if (r < a[rr].b)
			rr--;
	}
	cout << ans;
	return 0;
}
