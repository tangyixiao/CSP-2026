#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+10;
ll n, h, t, l, s1, s2, sum;

struct lk {
	ll a;
	char s;
} q[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> q[i].a >> q[i].s;
		l += q[i].a;
	}
	h = 1, t = n;
	if (l % 2 == 1)
		l = l / 2 + 1;
	else
		l = l / 2;
	while (h <= t) {
		if (q[h].a < q[t].a) {
			if (q[h].s != q[t].s)
				sum += q[h].a;
			q[t].a -= q[h].a;
			h++;
		} else {
			if (q[h].s != q[t].s)
				sum += q[t].a;
			q[h].a -= q[t].a;
			t--;
		}
	}
	cout << sum;
	return 0;
}
